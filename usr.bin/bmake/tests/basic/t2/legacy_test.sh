#! /bin/sh
# $NQC$

. $(dirname $0)/../../common.sh

# Description
DESC="A Makefile file with only a 'all:' file dependency specification, and shell command."

# Run
TEST_N=1
TEST_1=

eval_cmd $*
