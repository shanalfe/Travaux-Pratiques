#!/bin/bash

if [[ $# -lt 2 ]]
then
	echo "Usage: $0 <SRC_FILE> <DEST_FILE>"
	exit
fi

if [[ ! -f $1 ]]
then
	echo "File $1 does not exist !"
	exit
fi

if [[ -f $2 ]]
then
	echo -n "$2 exists. Overwrite? Yes/No --> "
	read answer
	if [[ $answer == "Yes" ]]
	then
		rm $2
	else
		exit
	fi
fi

while read addr
do
	x=$(expr substr $addr 1 8)
	y=$(expr substr $addr 9 8)
	z=$(expr substr $addr 17 8)
	t=$(expr substr $addr 25 8)

	echo "$((2#$x)).$((2#$y)).$((2#$z)).$((2#$t))"
done < $1 > $2

exit
