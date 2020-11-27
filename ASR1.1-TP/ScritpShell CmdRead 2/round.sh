#!/bin:bash


if [[$# -ne 2]]
then
	echo "No arguments"	
	exit
fi


if [[$2 -lt 0]]
then
	echo "No respect <0 "	
	exit
fi


##affichage du nombre de chiffre aprèzs la virgule du 1er arg


dec = $(expr substr $1 )


