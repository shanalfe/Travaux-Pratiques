# Processus, recouvrement 

#### Ex1
On veut écrire un programme calculant la somme des entiers 
de `1` à `N` à l’aide de `M` processus fils créés par leur père. 
Chaque flis calculera la somme  d’un sous-ensemble de ces entiers et la somme globale sera obtenue en 
calculant la somme des résultats intermédiaires de chaque fils dans le père.

Les entiers sont répartis uniformément entre les fils comme suit (exemple avec 3 fils) :

Fils 1 : 1, 4, 7, ...  
Fils 2 : 2, 5, 8, ...  
Fils 3 : 3, 6, 9, ...  

Le probème est la récupération par le père des résultats de chacun de ses fils. On créera une zone
de mémoire partagée avec la fonction `mmap` :

```c
void *mmap(void *addr, size_t length, int prot, int flags,
                  int fd, off_t offset);
```

Utilisez le flag 

```bash
MAP_ANONYMOUS
              The mapping is not backed by any file; its contents are initialized to zero.  The fd argument  is  ig‐
              nored;  however, some implementations require fd to be -1 if MAP_ANONYMOUS (or MAP_ANON) is specified,
              and portable applications should ensure this.  The  offset  argument  should  be  zero.   The  use  of
              MAP_ANONYMOUS in conjunction with MAP_SHARED is supported on Linux only since kernel 2.4.
```

#### Ex2
Le but est d'écrire une version simplifiée de la commande `xdg-open`,
nommée `ouvrir`.

`ouvrir` prendra en argument un nom de fichier. Suivant son extension,
la commande l'ouvrira avec une application dédiée (sans extension, le
fichier sera lui-même l'exécutable). Les associations (extension de
fichier, application correspondante) seront stockées dans un tableau :


```c
typedef struct assoc {
	char * ext;
	char * exe;
} assoc;

assoc assocs [] = {
	{"pdf","/usr/bin/xpdf"},
	{"html","/usr/bin/firefox"},
	{"c","/usr/bin/vim"}
	/* etc */
};
```

Implantez cette commande. On prendra soin de tester toutes les erreurs
possibles.

Fontions utiles pour déterminer le suffixe d'un nom de fichier :

```c
char *strrchr(const char *s, int c);
```

Si vous avez terminé, améliorez votre programme pour qu'il lise depuis
un fichier de configuation les associations (à vous de choisir le
format).


#### Ex3
Écrire un programme `mytimeout.c` dont l'usage est 

```bash
$mytimeout nbsec com [arg ...]
```

 - Il lance la commande `com [arg ...]` (fork-and-exec).
 - Il attend `nbsec` secondes.
 - Si la commande n'est pas encore terminée, il lui envoie 
  le signal `SIGTERM` et attend sa terminaison.

En cas de bonne terminaison de la commande, il renvoie son code de retour, sinon affiche 
la signal qui a provoqué sa mort.

Fonctions utiles :
```c
pid_t waitpid(pid_t pid, int *stat_loc, int options);
int kill(pid_t pid, int sig);
unsigned int sleep(unsigned int seconds);
```

Remarque : on pourrait améliorer, grâce à la gestion des signaux (ici `SIGCHLD`),  cette version en terminant le processus père quand 
son fils se termine avant la fin des `nbsec`.

#### Ex4
Écrire un programme C `myif.c` qui admet la ligne de commande suivante

```sh
myif com1 args ... --then com2 args ... [--else com3 args ...] --fi
```

Le programme exécute la première commande. En fonction de son code de retour, elle effectue la deuxième ou la troisième.
(on ne prend pas en charge l'imbrication d'un myif dans un myif)

On peut écrire les fonctions suivantes :
```c
int index_word(int argc,char * argv[],char * word);
/* renvoie la première occurrence d'un mot dans un tableau,
 * -1 sinon */

int fork_and_exec(char * com, char * argv[]);
/* cree un fils pour executer une commande donnée
 * avec ses arguments (NULL à la fin du tableau).
 * renvoie le code de retour de la commande, ou une
 * erreur si exec echoue */
```
On pourra utiliser pour le recouvrement la fonction :

```c
int execvp(const char *file, char *const argv[]);
```

La liste des arguments (le tableau `àrgv`) doit être terminé par `NULL`. 


