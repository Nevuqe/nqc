#!/bin/sh

#
# Copyright (c) 2011 Peter Holm <pho@FreeBSD.org>
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
#

# mksnap_ffs(8) test scenario

# Livelock seen in ffs_sync().
# "panic: initiate_write_bmsafemap: block 846816 marked free" seen.
# Zero size snapshot file seen.

[ `id -u ` -ne 0 ] && echo "Must be root!" && exit 1

. ../default.cfg

mount | grep $mntpoint | grep -q /dev/md && umount -f $mntpoint
mdconfig -l | grep -q md$mdstart &&  mdconfig -d -u $mdstart

mdconfig -a -t swap -s 2g -u $mdstart || exit 1

newfs -j md$mdstart > /dev/null 2>&1

mount /dev/md$mdstart $mntpoint
chmod 777 $mntpoint

export runRUNTIME=10m
export RUNDIR=$mntpoint/stressX
export creatINCARNATIONS=2

export TESTPROGS="
testcases/creat/creat
"
su $testuser -c 'cd ..; ./testcases/run/run $TESTPROGS' > /dev/null 2>&1 &
rpid=$!
mdstart2=$((mdstart + 1))
mntpoint2=${mntpoint}2
[ -d $mntpoint2 ] || mkdir $mntpoint2
mount | grep $mntpoint2 | grep -q /dev/md && umount -f $mntpoint2
mdconfig -l | grep -q md$mdstart2 &&  mdconfig -d -u $mdstart2
while kill -0 $rpid 2> /dev/null; do
	rm -f $mntpoint/.snap/suj16
	{ mksnap_ffs $mntpoint $mntpoint/.snap/suj16 || continue; } 2>&1 | \
		grep -v "Resource temporarily unavailable"
	[ ! -s $mntpoint/.snap/suj16 ] && continue
	mdconfig -a -t vnode -f $mntpoint/.snap/suj16 -u $mdstart2 -o readonly
	mount -r /dev/md$mdstart2 $mntpoint2

	ls -l $mntpoint2 > /dev/null

	umount $mntpoint2
	mdconfig -d -u $mdstart2
done
wait

while mount | grep $mntpoint | grep -q /dev/md; do
	umount $mntpoint || sleep 1
done
mdconfig -d -u $mdstart
