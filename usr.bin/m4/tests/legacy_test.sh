#!/bin/sh
# $NQC$

SRCDIR="$(dirname "${0}")"; export SRCDIR

m4 "${SRCDIR}/../regress.m4" "${SRCDIR}/regress.sh" | sh
