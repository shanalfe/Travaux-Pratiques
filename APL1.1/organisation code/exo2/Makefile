# Makefile de attente.c


# CHAPITRE 1 : BUT FINAL

but : exo2

# CHAPITRE 2 : VARIABLES

OFILES = mail.o \
			file.o \
		attente.o



CC = gcc

CFLAGS = -Wall -ansi -pedantic -g

# CHAPITRE 3 : DEPENDANCES (REGLES IMPLICITES)

mail.o : mail.h
file.o : file.h mail.h

attente.o : file.h

#CHAPITRE 4 : DEPENDANCES AVEC COMMANDES


exo2 : $(OFILES)
	$(CC) $(CFLAGS) -o exo2 $(OFILES)

#CHAPITRE 5 : NETTOYAGE DES FICHIERS GENERES

clean :
	-rm -f $(OFILES) exo2

#CHAPITRE 6 : BUTS FACTICES

.PHONY : but clean