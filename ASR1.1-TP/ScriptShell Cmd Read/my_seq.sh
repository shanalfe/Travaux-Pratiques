#!/bin/bash

if [[$# -lt 1]]
then
	echo "usage $0 <integr>"
	exit
fi

for ((i=1;i<=$1;i=i+1))
do
	echo $i
done 
exit

