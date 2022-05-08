CC = gcc -Wall 

all : main journaliste archiviste

main : main.c type.h
	$(CC) main.c -o main

journaliste : journaliste.c type.h
	$(CC) journaliste.c -o journaliste

archivite : archiviste.c type.h
	$(CC) archiviste.c -o archivite

clean :
	rm -f a.out