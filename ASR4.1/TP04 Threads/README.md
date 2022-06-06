TP : Threads
Ex1
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <assert.h>

#define NUM_THREADS 16

void *thread(void *thread_id) {
    int id = *((int *) thread_id);
    printf("Hello from thread %d\n", id);

    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; i++)
        assert( pthread_create(&threads[i], NULL, thread, &i) == 0);

    for (int i = 0; i < NUM_THREADS; i++)
        assert( pthread_join(threads[i], NULL) == 0);

    return EXIT_SUCCESS;
}
Est-ce que l’exécution de ce programme est correcte? Vous pouvez vous en assurer en l’exécutant plusieurs fois.
Si vous pensez (et avez constaté) que ce n’est pas le cas, expliquez pourquoi.
Modifiez le code pour qu’il donne le résultat attendu.
Ex2
On veut écrire un programme calculant la somme des entiers de 1 à N à l’aide de M threads. Chaque thread calculera la somme d’un sous-ensemble de ces entiers et la somme globale sera obtenue en calculant la somme des résultats intermédiaires de chaque thread.

Les entiers sont répartis uniformément entre les threads comme suit (exemple avec 3 threads) :

Thread 1 : 1, 4, 7, ...
Thread 2 : 2, 5, 8, ...
Thread 3 : 3, 6, 9, ...

Le programme doit lancer M threads, attendre qu’ils se terminent, faire la somme des résultats intermédiaires et afficher le résultat. Les valeurs N et M seront passées en ligne de commande.

Il est important que le programme respecte les points suivants :

L’implémentation ne doit utiliser aucune variable globale.
Le travail à effectuer pour chaque thread créé doit être aussi équitable que possible, quelles que soient les valeurs N et M choisies par l’utilisateur (ex : N=20, M=8).
Évitez d’utiliser un tableau pour contenir les valeurs à additionner.
Réaliser un test de validation automatiquement du résultat obtenu (vous devez connaître le résultat !).
Comparez le temps d'éxecution en fonction du nombre de threads.

/* pour "mesurer" le temps */
static inline double tstamp(void)
{
    struct timespec tv;
    clock_gettime(CLOCK_REALTIME, &tv);
    return tv.tv_sec + tv.tv_nsec * 1.0e-9;
}
Ex3
On souhaite écrire une petite librairie implantant une pile d'entiers. Sa taille sera statique, et determinée au moment de sa création. Voici l'interface :

stack_t * stack_create(int max_size);
crée une pile de taille max_size

int stack_destroy(stack_t *s);
détruit la pile

int stack_push(stack_t *s, int val);
empile la valeur val renvoie 1 en cas de succès, 0 sinon.

int stack_pop(stack_t *s,int *val);
dépile dans *val. renvoie 1 en cas de succès, 0 sinon.

( Décider ce que contiendra la structure stack_t définissant un objet de type pile et penser à insérer des assertions dans le code aux endroits nécessaires.)

Testez votre implantation avec une utilisation monothreadé.
Testez votre implantation avec ube utilisation multithreadé (une même pile utlisé par plusieurs threads). Cela fonctionne-t-il ?
Ajoutez des primitives d'exclusions mutuelles afin de garantir un comportement cohérent et déterministe dans le cas d’une exécution multi-threadée.
Ex4 (Mutltiplication matrice/vecteur, problème du false sharing)
Le but de l'exercice est de parallèliser le calcul du produit matrice/vecteur.

Pour rappel, le produit d'une matrice A[N][P] par un vecteur x[P] donne un vecteur y[N] par :

for(i=0;i<N;i++){
    y[i]=0;
	for(j=0;j<P;j++)
        y[i] += A[i][j]*x[j]
}
Écrire un programme qui prend en argument un entier n, et qui crée autant de threads pour le cacul du produit. Chaque thread recevra en argument l'intervalle des indices i in [start,end] pour lequels il doit effectuer le calcul y[i]. Pour le test, utilisez des matrices de type int en variables globales préalablement initialisées aléatoirement.

Remplissez le tableau suivant :

nb Threads	Dimensions
8000000x8	8000x8000	8x8000000
temps	temps	temps
1			
2			
4			
8			
Que constatez-vous pour la dernière colonne ? [ chaque processeur utilise un cache de premier niveau (L1) dont les lignes font 64 octets. Les composantes du vecteur y ne sont pas accèder de manière concurrente. Mais il se peut qu'une ligne d'un cache contienne une composante écrite par un autre thread dans un autre cache rendant la ligne dirty ]

Modifiez le code pour remédier au problème.