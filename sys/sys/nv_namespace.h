/*-
 * SPDX-License-Identifier: BSD-2-Clause-NQC
 *
 * Copyright (c) 2022 Rubicon Communications, LLC (Netgate)
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $NQC$
 */

#ifndef _NV_NAMESPACE_H_
#define _NV_NAMESPACE_H_

#define cnvlist_free_binary		NQC_cnvlist_free_binary
#define cnvlist_free_bool		NQC_cnvlist_free_bool
#define cnvlist_free_bool_array		NQC_cnvlist_free_bool_array
#define cnvlist_free_descriptor		NQC_cnvlist_free_descriptor
#define cnvlist_free_descriptor_array	NQC_cnvlist_free_descriptor_array
#define cnvlist_free_number		NQC_cnvlist_free_number
#define cnvlist_free_number_array	NQC_cnvlist_free_number_array
#define cnvlist_free_nvlist		NQC_cnvlist_free_nvlist
#define cnvlist_free_nvlist_array	NQC_cnvlist_free_nvlist_array
#define cnvlist_free_string		NQC_cnvlist_free_string
#define cnvlist_free_string_array	NQC_cnvlist_free_string_array
#define cnvlist_get_binary		NQC_cnvlist_get_binary
#define cnvlist_get_bool		NQC_cnvlist_get_bool
#define cnvlist_get_bool_array		NQC_cnvlist_get_bool_array
#define cnvlist_get_descriptor		NQC_cnvlist_get_descriptor
#define cnvlist_get_descriptor_array	NQC_cnvlist_get_descriptor_array
#define cnvlist_get_number		NQC_cnvlist_get_number
#define cnvlist_get_number_array	NQC_cnvlist_get_number_array
#define cnvlist_get_nvlist		NQC_cnvlist_get_nvlist
#define cnvlist_get_nvlist_array	NQC_cnvlist_get_nvlist_array
#define cnvlist_get_string		NQC_cnvlist_get_string
#define cnvlist_get_string_array	NQC_cnvlist_get_string_array
#define cnvlist_name			NQC_cnvlist_name
#define cnvlist_take_binary		NQC_cnvlist_take_binary
#define cnvlist_take_bool		NQC_cnvlist_take_bool
#define cnvlist_take_bool_array		NQC_cnvlist_take_bool_array
#define cnvlist_take_descriptor		NQC_cnvlist_take_descriptor
#define cnvlist_take_descriptor_array	NQC_cnvlist_take_descriptor_array
#define cnvlist_take_number		NQC_cnvlist_take_number
#define cnvlist_take_number_array	NQC_cnvlist_take_number_array
#define cnvlist_take_nvlist		NQC_cnvlist_take_nvlist
#define cnvlist_take_nvlist_array	NQC_cnvlist_take_nvlist_array
#define cnvlist_take_string		NQC_cnvlist_take_string
#define cnvlist_take_string_array	NQC_cnvlist_take_string_array
#define cnvlist_type			NQC_cnvlist_type
#define dnvlist_get_binary		NQC_dnvlist_get_binary
#define dnvlist_get_bool		NQC_dnvlist_get_bool
#define dnvlist_get_descriptor		NQC_dnvlist_get_descriptor
#define dnvlist_get_number		NQC_dnvlist_get_number
#define dnvlist_get_nvlist		NQC_dnvlist_get_nvlist
#define dnvlist_get_string		NQC_dnvlist_get_string
#define dnvlist_take_binary		NQC_dnvlist_take_binary
#define dnvlist_take_bool		NQC_dnvlist_take_bool
#define dnvlist_take_descriptor		NQC_dnvlist_take_descriptor
#define dnvlist_take_number		NQC_dnvlist_take_number
#define dnvlist_take_nvlist		NQC_dnvlist_take_nvlist
#define dnvlist_take_string		NQC_dnvlist_take_string
#define nvlist				NQC_nvlist
#define nvlist_add_binary		NQC_nvlist_add_binary
#define nvlist_add_bool			NQC_nvlist_add_bool
#define nvlist_add_bool_array		NQC_nvlist_add_bool_array
#define nvlist_add_descriptor		NQC_nvlist_add_descriptor
#define nvlist_add_descriptor_array	NQC_nvlist_add_descriptor_array
#define nvlist_add_null			NQC_nvlist_add_null
#define nvlist_add_number		NQC_nvlist_add_number
#define nvlist_add_number_array		NQC_nvlist_add_number_array
#define nvlist_add_nvlist		NQC_nvlist_add_nvlist
#define nvlist_add_nvlist_array		NQC_nvlist_add_nvlist_array
#define nvlist_add_nvpair		NQC_nvlist_add_nvpair
#define nvlist_add_string		NQC_nvlist_add_string
#define nvlist_add_string_array		NQC_nvlist_add_string_array
#define nvlist_add_stringf		NQC_nvlist_add_stringf
#define nvlist_add_stringv		NQC_nvlist_add_stringv
#define nvlist_append_bool_array	NQC_nvlist_append_bool_array
#define nvlist_append_descriptor_array	NQC_nvlist_append_descriptor_array
#define nvlist_append_number_array	NQC_nvlist_append_number_array
#define nvlist_append_nvlist_array	NQC_nvlist_append_nvlist_array
#define nvlist_append_string_array	NQC_nvlist_append_string_array
#define nvlist_clone			NQC_nvlist_clone
#define nvlist_create			NQC_nvlist_create
#define nvlist_descriptors		NQC_nvlist_descriptors
#define nvlist_destroy			NQC_nvlist_destroy
#define nvlist_dump			NQC_nvlist_dump
#define nvlist_empty			NQC_nvlist_empty
#define nvlist_error			NQC_nvlist_error
#define nvlist_exists			NQC_nvlist_exists
#define nvlist_exists_binary		NQC_nvlist_exists_binary
#define nvlist_exists_bool		NQC_nvlist_exists_bool
#define nvlist_exists_bool_array	NQC_nvlist_exists_bool_array
#define nvlist_exists_descriptor	NQC_nvlist_exists_descriptor
#define nvlist_exists_descriptor_array	NQC_nvlist_exists_descriptor_array
#define nvlist_exists_null		NQC_nvlist_exists_null
#define nvlist_exists_number		NQC_nvlist_exists_number
#define nvlist_exists_number_array	NQC_nvlist_exists_number_array
#define nvlist_exists_nvlist		NQC_nvlist_exists_nvlist
#define nvlist_exists_nvlist_array	NQC_nvlist_exists_nvlist_array
#define nvlist_exists_string		NQC_nvlist_exists_string
#define nvlist_exists_string_array	NQC_nvlist_exists_string_array
#define nvlist_exists_type		NQC_nvlist_exists_type
#define nvlist_fdump			NQC_nvlist_fdump
#define nvlist_first_nvpair		NQC_nvlist_first_nvpair
#define nvlist_flags			NQC_nvlist_flags
#define nvlist_free			NQC_nvlist_free
#define nvlist_free_binary		NQC_nvlist_free_binary
#define nvlist_free_binary_array	NQC_nvlist_free_binary_array
#define nvlist_free_bool		NQC_nvlist_free_bool
#define nvlist_free_bool_array		NQC_nvlist_free_bool_array
#define nvlist_free_descriptor		NQC_nvlist_free_descriptor
#define nvlist_free_descriptor_array	NQC_nvlist_free_descriptor_array
#define nvlist_free_null		NQC_nvlist_free_null
#define nvlist_free_number		NQC_nvlist_free_number
#define nvlist_free_number_array	NQC_nvlist_free_number_array
#define nvlist_free_nvlist		NQC_nvlist_free_nvlist
#define nvlist_free_nvlist_array	NQC_nvlist_free_nvlist_array
#define nvlist_free_nvpair		NQC_nvlist_free_nvpair
#define nvlist_free_string		NQC_nvlist_free_string
#define nvlist_free_string_array	NQC_nvlist_free_string_array
#define nvlist_free_type		NQC_nvlist_free_type
#define nvlist_get_array_next		NQC_nvlist_get_array_next
#define nvlist_get_array_next_nvpair	NQC_nvlist_get_array_next_nvpair
#define nvlist_get_binary		NQC_nvlist_get_binary
#define nvlist_get_bool			NQC_nvlist_get_bool
#define nvlist_get_bool_array		NQC_nvlist_get_bool_array
#define nvlist_get_descriptor		NQC_nvlist_get_descriptor
#define nvlist_get_descriptor_array	NQC_nvlist_get_descriptor_array
#define nvlist_get_number		NQC_nvlist_get_number
#define nvlist_get_number_array		NQC_nvlist_get_number_array
#define nvlist_get_nvlist		NQC_nvlist_get_nvlist
#define nvlist_get_nvlist_array		NQC_nvlist_get_nvlist_array
#define nvlist_get_nvpair		NQC_nvlist_get_nvpair
#define nvlist_get_nvpair_parent	NQC_nvlist_get_nvpair_parent
#define nvlist_get_pararr		NQC_nvlist_get_pararr
#define nvlist_get_parent		NQC_nvlist_get_parent
#define nvlist_get_string		NQC_nvlist_get_string
#define nvlist_get_string_array		NQC_nvlist_get_string_array
#define nvlist_in_array			NQC_nvlist_in_array
#define nvlist_move_binary		NQC_nvlist_move_binary
#define nvlist_move_bool_array		NQC_nvlist_move_bool_array
#define nvlist_move_descriptor		NQC_nvlist_move_descriptor
#define nvlist_move_descriptor_array	NQC_nvlist_move_descriptor_array
#define nvlist_move_number_array	NQC_nvlist_move_number_array
#define nvlist_move_nvlist		NQC_nvlist_move_nvlist
#define nvlist_move_nvlist_array	NQC_nvlist_move_nvlist_array
#define nvlist_move_nvpair		NQC_nvlist_move_nvpair
#define nvlist_move_string		NQC_nvlist_move_string
#define nvlist_move_string_array	NQC_nvlist_move_string_array
#define nvlist_ndescriptors		NQC_nvlist_ndescriptors
#define nvlist_next			NQC_nvlist_next
#define nvlist_next_nvpair		NQC_nvlist_next_nvpair
#define nvlist_pack			NQC_nvlist_pack
#define nvlist_prev_nvpair		NQC_nvlist_prev_nvpair
#define nvlist_recv			NQC_nvlist_recv
#define nvlist_remove_nvpair		NQC_nvlist_remove_nvpair
#define nvlist_report_missing		NQC_nvlist_report_missing
#define nvlist_send			NQC_nvlist_send
#define nvlist_set_array_next		NQC_nvlist_set_array_next
#define nvlist_set_error		NQC_nvlist_set_error
#define nvlist_set_flags		NQC_nvlist_set_flags
#define nvlist_set_parent		NQC_nvlist_set_parent
#define nvlist_size			NQC_nvlist_size
#define nvlist_t			NQC_nvlist_t
#define nvlist_take_binary		NQC_nvlist_take_binary
#define nvlist_take_bool		NQC_nvlist_take_bool
#define nvlist_take_bool_array		NQC_nvlist_take_bool_array
#define nvlist_take_descriptor		NQC_nvlist_take_descriptor
#define nvlist_take_descriptor_array	NQC_nvlist_take_descriptor_array
#define nvlist_take_number		NQC_nvlist_take_number
#define nvlist_take_number_array	NQC_nvlist_take_number_array
#define nvlist_take_nvlist		NQC_nvlist_take_nvlist
#define nvlist_take_nvlist_array	NQC_nvlist_take_nvlist_array
#define nvlist_take_nvpair		NQC_nvlist_take_nvpair
#define nvlist_take_string		NQC_nvlist_take_string
#define nvlist_take_string_array	NQC_nvlist_take_string_array
#define nvlist_unpack			NQC_nvlist_unpack
#define nvlist_unpack_header		NQC_nvlist_unpack_header
#define nvlist_xfer			NQC_nvlist_xfer
#define nvpair_append_bool_array	NQC_nvpair_append_bool_array
#define nvpair_append_descriptor_array	NQC_nvpair_append_descriptor_array
#define nvpair_append_number_array	NQC_nvpair_append_number_array
#define nvpair_append_nvlist_array	NQC_nvpair_append_nvlist_array
#define nvpair_append_string_array	NQC_nvpair_append_string_array
#define nvpair_assert			NQC_nvpair_assert
#define nvpair_clone			NQC_nvpair_clone
#define nvpair_create_binary		NQC_nvpair_create_binary
#define nvpair_create_bool		NQC_nvpair_create_bool
#define nvpair_create_bool_array	NQC_nvpair_create_bool_array
#define nvpair_create_descriptor	NQC_nvpair_create_descriptor
#define nvpair_create_descriptor_array	NQC_nvpair_create_descriptor_array
#define nvpair_create_null		NQC_nvpair_create_null
#define nvpair_create_number		NQC_nvpair_create_number
#define nvpair_create_number_array	NQC_nvpair_create_number_array
#define nvpair_create_nvlist		NQC_nvpair_create_nvlist
#define nvpair_create_nvlist_array	NQC_nvpair_create_nvlist_array
#define nvpair_create_string		NQC_nvpair_create_string
#define nvpair_create_string_array	NQC_nvpair_create_string_array
#define nvpair_create_stringf		NQC_nvpair_create_stringf
#define nvpair_create_stringv		NQC_nvpair_create_stringv
#define nvpair_free			NQC_nvpair_free
#define nvpair_free_structure		NQC_nvpair_free_structure
#define nvpair_get_binary		NQC_nvpair_get_binary
#define nvpair_get_bool			NQC_nvpair_get_bool
#define nvpair_get_bool_array		NQC_nvpair_get_bool_array
#define nvpair_get_descriptor		NQC_nvpair_get_descriptor
#define nvpair_get_descriptor_array	NQC_nvpair_get_descriptor_array
#define nvpair_get_number		NQC_nvpair_get_number
#define nvpair_get_number_array		NQC_nvpair_get_number_array
#define nvpair_get_nvlist		NQC_nvpair_get_nvlist
#define nvpair_get_nvlist_array		NQC_nvpair_get_nvlist_array
#define nvpair_get_string		NQC_nvpair_get_string
#define nvpair_get_string_array		NQC_nvpair_get_string_array
#define nvpair_header_size		NQC_nvpair_header_size
#define nvpair_init_datasize		NQC_nvpair_init_datasize
#define nvpair_insert			NQC_nvpair_insert
#define nvpair_move_binary		NQC_nvpair_move_binary
#define nvpair_move_bool_array		NQC_nvpair_move_bool_array
#define nvpair_move_descriptor		NQC_nvpair_move_descriptor
#define nvpair_move_descriptor_array	NQC_nvpair_move_descriptor_array
#define nvpair_move_number_array	NQC_nvpair_move_number_array
#define nvpair_move_nvlist		NQC_nvpair_move_nvlist
#define nvpair_move_nvlist_array	NQC_nvpair_move_nvlist_array
#define nvpair_move_string		NQC_nvpair_move_string
#define nvpair_move_string_array	NQC_nvpair_move_string_array
#define nvpair_name			NQC_nvpair_name
#define nvpair_next			NQC_nvpair_next
#define nvpair_nvlist			NQC_nvpair_nvlist
#define nvpair_pack_binary		NQC_nvpair_pack_binary
#define nvpair_pack_bool		NQC_nvpair_pack_bool
#define nvpair_pack_bool_array		NQC_nvpair_pack_bool_array
#define nvpair_pack_descriptor		NQC_nvpair_pack_descriptor
#define nvpair_pack_descriptor_array	NQC_nvpair_pack_descriptor_array
#define nvpair_pack_header		NQC_nvpair_pack_header
#define nvpair_pack_null		NQC_nvpair_pack_null
#define nvpair_pack_number		NQC_nvpair_pack_number
#define nvpair_pack_number_array	NQC_nvpair_pack_number_array
#define nvpair_pack_nvlist_array_next	NQC_nvpair_pack_nvlist_array_next
#define nvpair_pack_nvlist_up		NQC_nvpair_pack_nvlist_up
#define nvpair_pack_string		NQC_nvpair_pack_string
#define nvpair_pack_string_array	NQC_nvpair_pack_string_array
#define nvpair_prev			NQC_nvpair_prev
#define nvpair_remove			NQC_nvpair_remove
#define nvpair_size			NQC_nvpair_size
#define nvpair_type			NQC_nvpair_type
#define nvpair_type_string		NQC_nvpair_type_string
#define nvpair_unpack			NQC_nvpair_unpack
#define nvpair_unpack_binary		NQC_nvpair_unpack_binary
#define nvpair_unpack_bool		NQC_nvpair_unpack_bool
#define nvpair_unpack_bool_array	NQC_nvpair_unpack_bool_array
#define nvpair_unpack_descriptor	NQC_nvpair_unpack_descriptor
#define nvpair_unpack_descriptor_array	NQC_nvpair_unpack_descriptor_array
#define nvpair_unpack_header		NQC_nvpair_unpack_header
#define nvpair_unpack_null		NQC_nvpair_unpack_null
#define nvpair_unpack_number		NQC_nvpair_unpack_number
#define nvpair_unpack_number_array	NQC_nvpair_unpack_number_array
#define nvpair_unpack_nvlist		NQC_nvpair_unpack_nvlist
#define nvpair_unpack_nvlist_array	NQC_nvpair_unpack_nvlist_array
#define nvpair_unpack_string		NQC_nvpair_unpack_string
#define nvpair_unpack_string_array	NQC_nvpair_unpack_string_array

#endif
