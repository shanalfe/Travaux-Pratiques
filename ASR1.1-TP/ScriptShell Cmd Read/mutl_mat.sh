#!/bin/bash

if [[$# -lt 2]]
then
	echo "Usage $0 <arg1> <arg2"
	exit
fi

if [[$1 -lt 0 || $2 -lt 0]]
then
	echo "No"
	exit
fi

if [[$1 -gt $2]]
then
	echo "No"
	exit
fi

for ((i=$1; i<=$2; i++))
do
	for ((j=$1; j<=$2; j++))
	do
		echo -n $((j*i))
		echo -ne "\t"
	done
	echo -ne "\n"
done

exit

