#!/bin/sh
# $NQC$
echo $@
if ! test -t 0 ; then
	cat
fi
