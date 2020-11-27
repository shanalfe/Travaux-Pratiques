#!/bin/bash

if [[$# -ne 3]]
then
	echo -n "Usage : $0"
	echo -n "<STRINGS_REPRESENTATIONS_FILE><radix> <REPORTS_FILE>"
	echo "<radix> <REPORTS_FILE>"
	exit
fi


if [[ ! ($2 -ge 2) && ($2 -lt 36) ]]
then
	echo "The radix is a decimal between 2 and 36"
fi


if [[ ! -f $1 ]]
then
	echo "none.dat does not exist or is not regular."
	exit
fi


if [[-f "$3"]]
then
	echo -n "File $3 exists. Owervrite ? Tes/No :"
	read confirm
	if [[confirm != Yes]]
	then
		echo "Opération annulée"
		exit
	fi
fi
