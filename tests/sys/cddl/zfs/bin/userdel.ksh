#! /usr/local/bin/ksh93 -p

# $NQC$

a=
g=
for i in $*
do
	a="$a $g"
	g=$i
done
	
/usr/sbin/pw userdel $g $a
