#!/bin/bash

if [[$# -lt 2]]
then
	echo "Usage $0 <input file> <output file>"
	exit
fi

if [[! -f $1]]
then 
	echo "Le fichier n'existe pas"
	exit
fi

if [[-f $2]]
then 
	echo -n "$2 exists. Overwrite? Yes/No -->"
	read Overwrite

if [[$Overwrite == "Yes"]]
then
	echo $2
else
	exit
fi
fi

for addr in $(cat $1) 
do
	x = $(expr substr $addr 1 8)
	y = $(expr substr $addr 9 8)
	z = $(expr substr $addr 17 8)
	t = $(expr substr $addr 25 8)


echo "$((2#$x)).$((2#$y)).$((2#$z)).$((2#$t))" >> $2
done 





