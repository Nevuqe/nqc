#!/bin/sh
# $NQC$

diff -I\$\NQC $1 $2 | grep '^-' >/dev/null && printf "\tDIFFER: $1 $2\n" && exit 0 || exit 0
