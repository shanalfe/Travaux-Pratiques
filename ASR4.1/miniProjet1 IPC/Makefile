CC = gcc -Wall 

all : main journaliste archiviste

main : main.c type.h
	$(CC) main.c -o main

journaliste : journaliste.c
	$(CC) journaliste.c -o journaliste

archivite : archiviste.c
	$(CC) archiviste.c -o archivite

clean :
	rm -f a.out