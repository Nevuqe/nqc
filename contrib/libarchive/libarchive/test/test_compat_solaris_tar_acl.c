/*-
 * Copyright (c) 2003-2009 Tim Kientzle
 * Copyright (c) 2016 Martin Matuska
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR(S) ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#include "test.h"
__NQCID("$NQC$");

/*
 * Verify reading entries with POSIX.1e and NFSv4 ACLs from archives created
 * with Solaris tar.
 *
 * This should work on all systems, regardless of whether local filesystems
 * support ACLs or not.
 */

static struct archive_test_acl_t acls0[] = {
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_WRITE |
	    ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_USER_OBJ, -1, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_EXECUTE,
	  ARCHIVE_ENTRY_ACL_USER, 71, "lp" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_USER, 666, "666" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_WRITE | ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_USER, 1000, "1000" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_GROUP_OBJ, -1, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_MASK, -1, ""},
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_OTHER, -1, "" },
};

static struct archive_test_acl_t acls1[] = {
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_WRITE | ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_USER_OBJ, -1, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_WRITE | ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_USER, 2, "bin" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_GROUP_OBJ, -1, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_GROUP, 3, "sys" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_MASK, -1, ""},
	{ ARCHIVE_ENTRY_ACL_TYPE_ACCESS, 0,
	  ARCHIVE_ENTRY_ACL_OTHER, -1, "" },
};

static struct archive_test_acl_t acls2[] = {
	{ ARCHIVE_ENTRY_ACL_TYPE_DEFAULT, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_WRITE | ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_USER_OBJ, -1 ,"" },
	{ ARCHIVE_ENTRY_ACL_TYPE_DEFAULT, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_WRITE | ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_USER, 2, "bin" },
	{ ARCHIVE_ENTRY_ACL_TYPE_DEFAULT, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_GROUP_OBJ, -1, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_DEFAULT, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_GROUP, 3, "sys" },
	{ ARCHIVE_ENTRY_ACL_TYPE_DEFAULT, ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_WRITE | ARCHIVE_ENTRY_ACL_READ,
	  ARCHIVE_ENTRY_ACL_MASK, -1, ""},
	{ ARCHIVE_ENTRY_ACL_TYPE_DEFAULT, 0,
	  ARCHIVE_ENTRY_ACL_OTHER, -1, "" },
};

static struct archive_test_acl_t acls3[] = {
	{ ARCHIVE_ENTRY_ACL_TYPE_DENY,
	    ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_WRITE_DATA |
	    ARCHIVE_ENTRY_ACL_APPEND_DATA |
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_WRITE_ACL |
	    ARCHIVE_ENTRY_ACL_WRITE_OWNER |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_GROUP, 12, "daemon" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_WRITE_DATA |
	    ARCHIVE_ENTRY_ACL_APPEND_DATA |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_GROUP, 2, "bin" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_USER, 4, "adm" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_WRITE_DATA |
	    ARCHIVE_ENTRY_ACL_APPEND_DATA |
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_WRITE_ACL |
	    ARCHIVE_ENTRY_ACL_WRITE_OWNER |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_USER_OBJ, 0, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_GROUP_OBJ, 0, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_EVERYONE, 0, "" },
};

static struct archive_test_acl_t acls4[] = {
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_WRITE_DATA |
	    ARCHIVE_ENTRY_ACL_APPEND_DATA |
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_WRITE_ACL |
	    ARCHIVE_ENTRY_ACL_WRITE_OWNER |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE |
	    ARCHIVE_ENTRY_ACL_ENTRY_FILE_INHERIT |
	    ARCHIVE_ENTRY_ACL_ENTRY_DIRECTORY_INHERIT |
	    ARCHIVE_ENTRY_ACL_ENTRY_INHERIT_ONLY,
	  ARCHIVE_ENTRY_ACL_USER, 1100, "1100" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE |
	    ARCHIVE_ENTRY_ACL_ENTRY_FILE_INHERIT |
	    ARCHIVE_ENTRY_ACL_ENTRY_DIRECTORY_INHERIT,
	  ARCHIVE_ENTRY_ACL_GROUP, 4, "adm" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_WRITE_DATA |
	    ARCHIVE_ENTRY_ACL_APPEND_DATA |
	    ARCHIVE_ENTRY_ACL_DELETE_CHILD |
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_WRITE_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_WRITE_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_WRITE_ACL |
	    ARCHIVE_ENTRY_ACL_WRITE_OWNER |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_USER_OBJ, 0, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_EXECUTE |
	    ARCHIVE_ENTRY_ACL_READ_DATA |
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_GROUP_OBJ, 0, "" },
	{ ARCHIVE_ENTRY_ACL_TYPE_ALLOW,
	    ARCHIVE_ENTRY_ACL_READ_ATTRIBUTES |
	    ARCHIVE_ENTRY_ACL_READ_NAMED_ATTRS |
	    ARCHIVE_ENTRY_ACL_READ_ACL |
	    ARCHIVE_ENTRY_ACL_SYNCHRONIZE,
	  ARCHIVE_ENTRY_ACL_EVERYONE, 0, "" },
};

DEFINE_TEST(test_compat_solaris_tar_acl)
{
	char name[] = "test_compat_solaris_tar_acl.tar";
	struct archive *a;
	struct archive_entry *ae;

	/* Read archive file */
	assert(NULL != (a = archive_read_new()));
        assertEqualIntA(a, ARCHIVE_OK, archive_read_support_filter_all(a));
        assertEqualIntA(a, ARCHIVE_OK, archive_read_support_format_all(a));
        extract_reference_file(name);
	assertEqualIntA(a, ARCHIVE_OK, archive_read_open_filename(a, name,
	    10240));

	/* First item has access ACLs */
	assertA(0 == archive_read_next_header(a, &ae));
	failure("One extended ACL should flag all ACLs to be returned.");
	assertEqualInt(7, archive_entry_acl_reset(ae,
	    ARCHIVE_ENTRY_ACL_TYPE_ACCESS));
	assertEntryCompareAcls(ae, acls0, sizeof(acls0)/sizeof(acls0[0]),
	    ARCHIVE_ENTRY_ACL_TYPE_ACCESS, 0644);
	failure("Basic ACLs should set mode to 0644, not %04o",
	    archive_entry_mode(ae)&0777);
	assert((archive_entry_mode(ae) & 0777) == 0644);

	/* Second item has default and access ACLs */
	assertA(0 == archive_read_next_header(a, &ae));
	assertEqualInt(6, archive_entry_acl_reset(ae,
	    ARCHIVE_ENTRY_ACL_TYPE_ACCESS));
	assertEntryCompareAcls(ae, acls1, sizeof(acls1)/sizeof(acls1[0]),
	    ARCHIVE_ENTRY_ACL_TYPE_ACCESS, 0750);
	failure("Basic ACLs should set mode to 0750, not %04o",
	    archive_entry_mode(ae)&0777);
	assert((archive_entry_mode(ae) & 0777) == 0750);
	assertEqualInt(6, archive_entry_acl_reset(ae,
	    ARCHIVE_ENTRY_ACL_TYPE_DEFAULT));
	assertEntryCompareAcls(ae, acls2, sizeof(acls2)/sizeof(acls2[0]),
	    ARCHIVE_ENTRY_ACL_TYPE_DEFAULT, 0750);

	/* Third item has NFS4 ACLs */
	assertA(0 == archive_read_next_header(a, &ae));
	assertEqualInt(6, archive_entry_acl_reset(ae,
	    ARCHIVE_ENTRY_ACL_TYPE_NFS4));
	assertEntryCompareAcls(ae, acls3, sizeof(acls3)/sizeof(acls3[0]),
	    ARCHIVE_ENTRY_ACL_TYPE_NFS4, 0);

	/* Fourth item has NFS4 ACLs and inheritance flags */
	assertA(0 == archive_read_next_header(a, &ae));
	assertEqualInt(5, archive_entry_acl_reset(ae,
	    ARCHIVE_ENTRY_ACL_TYPE_NFS4));
	assertEntryCompareAcls(ae, acls4, sizeof(acls4)/sizeof(acls0[4]),
	    ARCHIVE_ENTRY_ACL_TYPE_NFS4, 0);

	/* Close the archive. */
	assertEqualIntA(a, ARCHIVE_OK, archive_read_close(a));
	assertEqualInt(ARCHIVE_OK, archive_read_free(a));
}
