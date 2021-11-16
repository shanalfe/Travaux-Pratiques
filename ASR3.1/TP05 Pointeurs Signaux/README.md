# Pointeurs (généricité, pointeur de fonctions), Signaux

>sources à compléter dans le repertoire [src](./src)


#### Ex0
```c
#include<stdio.h>
#include<stdlib.h>

void map(void *base,size_t n ,size_t size_elem,void(*f)(void *)){
	int i;
	char *ptr = (char*)base; 
	for(i=0;i<n;i++) 
		f((void*)(ptr+i*size_elem)); 
}

int main(){
	int t1[10]={12,-7,1,-16,3,19,7,1,5,0};
	char * t2[]={"chou","joujou","bijou","genou",
		"caillou","hibou","pou"};

	map(t1,10,sizeof(int),print_int);
	map(t2,7,sizeof(char*),print_string);

	/*qsort(t1,10,sizeof(int),cmp_int);
	  qsort(t2,7,sizeof(char * ),cmp_tring);*/
}
```

Que fait la fonction `map()` ?

 1.  Écrire les fonctions `print_int` et `print_string` pour afficher
 les deux tableaux avec `map`.
 2.  La fonction `qsort` 

 ```c
 #include <stdlib.h>

 void qsort(void *base, size_t nmemb, size_t size,
            int (*compar)(const void *, const void *));
 ```
 permet de trier le tableau relativement à la
 fonction de comparaison passée en paramètre. Écrire les
 fonctions `cmp_int` et `cmp_string` pour trier les tableaux `t1`
 et `t2`.



#### Ex1
Pour calculer le nombre \\(\pi\\), on utilise la méthode de Monte-Carlo.
On tire aléatoirement des couples \\((x,y)\\) de nombres de
\\([0,1]\times[0,1]\\). La probabilité qu'il tombe dans le disque de
rayon 1 est exactement de \\(\frac{\pi}{4}\\). On procède à plusieurs
tirages pour estimer la probabilité correspondante.

```c
uint64_t tirs_in,tirs=0;
double x,y;
int main(int argc, char **argv){
	tirs_in = 0;
	tirs = 0;
	for (;;){
		x=rand()/(RAND_MAX*1.0);
		y=rand()/(RAND_MAX*1.0);
		tirs++;
		if ((x*x+y*y)<=1){
			tirs_in++;
		}    
	}
	/* la probabilité vaut tirsIn/tirs, 
	   Elle converge lentement vers pi/4*/	
}        
```

En utilisant les signaux, mettre en place :

 - avec `SIGALRM`, toutes les 5 secondes, l'affichage de la valeur
 de pi en cours et le nombre de tirs effectués.
 - avec `SIGINT` l'arrêt du programme (après la demande d'une
	confirmation), avec l'affichage du temps écoulé depuis son
 lancement, quand on fait `ctrl+C` au terminal.
 - avec `SIGQUIT` la réinitialisation du calcul avec `ctrl+\`
 depuis le terminal. (faites en sorte que toutes les valeurs restent cohérentes) 

Dans chaque handler, les 2 autres signaux seront bloqués.


#### Ex2
Écrire un programme `mytimeout.c` dont l'usage est 

```bash
$mytimeout nbsec com [arg ...]
```

 - Il lance la commande `com [arg ...]` (fork-and-exec).
 - Il attend `nbsec` secondes, ou la fin de son fils.
 - Si la commande n'est pas encore terminée au bout de du temps, il lui envoie  le signal 
 `SIGTERM`.

En cas de terminaison de la commande, il renvoie son code de retour, sinon renvoie le code
124. 


#### Ex3

Le but est de protéger un morceau de code  (**section critique**) d'un éventuellement
déroutement à cause de la prise en compte d'un signal.

```c
int x=2,y=3;
int swap(int *x,int *y){
	int tmp=*x;
	*x=*y;
	*y=tmp;
}

void sig_handler(int signo){
	switch(signo){
		case SIGQUIT : 
			printf("x=%d y=%d\n",x,y);
			break;
	}
}

int main(int argc,char * argv[]){

	assert(set_signal_handler(SIGQUIT,sig_handler)==0);
	while(1){
		swap(&x,&y);
	}
}
```

1. Lancez le programme, et envoyez (depuis le terminal) le signal SIGQUIT souvent. La fonction
 `swap` est-elle interrompue ? comment le voyez-vous ?
2. Ajoutez le code nécessaire pour assurer que `swap` ne soit jamais interrompue par `SIGQUIT`.

#### Ex4
On va simuler un match de **ping-pong** entre un père et son fils, en utilisant le signal `SIGUSR1`.
 - Le père commence à jouer. 
 - On simule 10 échanges. À chaque coup, le père affiche Ping, le fils Pong. L'envoie de la balle 
	consiste à envoyer le signal `SIGUSR1` à son adversaire.

La difficulté consiste à synchroniser correctement les échanges.

Voici un premier code naïf :
```c
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <assert.h>

#define N 10
void sig_hand(int sig) {}

sigset_t saveMask, blockMask;

void player_wait(){
	pause();
}
void child_process()
{
	int x = 0;
	while(x < N)
	{
		player_wait();
		printf("\tPong %d!\n", ++x);
		kill(getppid(), SIGUSR1);
	}
	return ;
}

void parent_process(pid_t pid)
{
	int y = 0;
	while (y < N)
	{
		printf("Ping %d!\n", ++y);
		kill(pid, SIGUSR1);
		player_wait();
	}
	return ;
}

int main(int argc, char* argv[])
{
	//set up signal handler for parent & child
	struct sigaction sa;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sa.sa_handler = sig_hand;

	assert (sigaction(SIGUSR1, &sa, NULL) != -1);

	pid_t pid = fork();

	if (pid == 0)
		child_process();
	else
		parent_process(pid);
	return 0;
}
```

1. Expliquez pourquoi ce code n'est pas correct (Faites varier `N`).
2. Proposez une solution. 
