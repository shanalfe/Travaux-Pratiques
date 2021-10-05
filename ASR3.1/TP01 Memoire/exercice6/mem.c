#include "mem.h"
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct frame {
	int no;
	int page;
	int r;    /* bit pour la seconde chance */
} frame ;


typedef struct fifo {
	int head;    
	int tail;
	int nbelem;
}  fifo; 

typedef struct mem {
	int nbframes;
	frame * frames;
} mem;

static mem  *  memory=NULL;
static fifo  FIFO; 


/* Fifo est buffer circulaire
 * head pointe sur la tete (element le plus ancien)
 * tail pointe sur la queue (element le plus recent)
 * nbelem represente le nombre d'element dans la file
 * head et tail progressent modulo le nombre de frame 
 * dans la memoire */
/*    
 *    Memoire
	-------------
	| frame 0   | <- head
	-------------
	| frame 1   |
	-------------
	| frame 2   | 
	-------------
	| frame 3   |
	-------------
	| frame 4   |
	-------------
	| ...       |
	-------------
	| ...       |
	-------------
	| ...       | <- tail
	-------------
	| ...       |
	-------------
*/

static int init(int n)
{

	int i;
	memory = (mem*)calloc(sizeof(mem),1);
	memory-> nbframes = n;
	memory-> frames = (frame *) calloc(n,sizeof(frame));
	if (memory -> frames  == NULL) return -1;

	for(i=0;i<n;i++){
		memory->frames[i].no = i;
		memory->frames[i].page = -1; /* les frames sont vides initialement */
		memory->frames[i].r=0;
	}
	FIFO.head = FIFO.tail = 0;
	FIFO.nbelem = 0;
	return n;
}

static int _page_is_in(int page)
{
/* a ecrire */	
}

static int _fifo_is_full()
{
	return (FIFO.nbelem == memory->nbframes);
}

int get_page_2chance(int page)
{
/* pour la deuxieme question */
}

int get_page_fifo(int page)
{
	/* a ecrire */
}

void simu(int nb_frame,int t[],int l)
{
	int i,j;
	init(nb_frame);
	frame ** trace;
	trace = (frame **) malloc(sizeof(frame *) * l);
	int * defaut = (int *) calloc(sizeof(int),l);
	for (i=0;i<l+1;i++) trace[i] = (frame *) malloc(nb_frame * sizeof(frame));
	for(i=0;i<l;i++){

		defaut[i] = get_page_fifo(t[i]);
		//defaut[i] = get_page_2chance(t[i]);
		memcpy (trace[i],memory->frames,sizeof(frame)*nb_frame);
	}
	printf("------------");
	for (i=0;i<l;i++){
		printf("------",i+1);
	}
	printf("\n");
	printf("|temps    | ");
	for (i=0;i<l;i++){
		printf(" %3d |",i);

	}
	printf("\n");
	printf("------------");
	for (i=0;i<l;i++){
		printf("------",i+1);
	}
	printf("\n");


	printf("|page     | ");
	for (i=0;i<l;i++){
		printf(" %3d |",t[i]);

	}
	printf("\n");

	printf("------------");
	for (i=0;i<l;i++){
		printf("------",i+1);
	}
	printf("\n");


	for(j=0;j<nb_frame;j++){
		printf("|frame %3d| ",j);
		for(i=0;i<l;i++){
			if (trace[i][j].page !=-1)			printf(" %3d |",trace[i][j].page);
			else printf("   X |"); 
		}
		printf("\n");
		printf("------------");
		for (i=0;i<l;i++){
			printf("------",i+1);
		}
		printf("\n");
	}
	printf("|default  | ");
	for (i=0;i<l;i++){
		printf(" %3d |",!defaut[i]);

	}
	printf("\n");

	printf("------------");
	for (i=0;i<l;i++){
		printf("------",i+1);
	}
	printf("\n");
	free(memory->frames);
	free(memory);
	memory = NULL;
	for(i=0;i<l;i++) free(trace[i]);
	free(trace);

}