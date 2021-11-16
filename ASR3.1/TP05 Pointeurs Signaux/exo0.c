#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void map(void *base,size_t n ,size_t size_elem,void(*f)(void *)){
	int i;
	char *ptr = (char*)base; 
	for(i=0;i<n;i++) 
		f((void*)(ptr+i*size_elem)); 
}

void print_int (void *i) {
	printf ("%d ", *(int *)i); // On force la conversion int
}


void print_string (void *s) {
	printf ("%s ", *(char* *)s ); //char * * => un pointeur sur un tableau de caractère
}


int cmp_int (const void* a, const void* b) {
	int aa = *(const int*)a;
	int bb = *(const int*)b;

	return aa - bb;

}


int cmp_string (const void* c, const void* d) {
	const char* *cc = (const char* *)c;
	const char* *dd = (const char* *)d;

	return strcmp (*cc, *dd);
}


int main(){
	int    t1[10]={12,-7,1,-16,3,19,7,1,5,0};
	char * t2[]={"chou","joujou","bijou","genou",
		"caillou","hibou","pou"};

		map(t1,10,sizeof(int),print_int);
		printf("\n");
		map(t2,7,sizeof(char*),print_string);
		printf("\n");
		qsort(t1,10,sizeof(int),cmp_int);
		map(t1,10,sizeof(int),print_int);
		printf("\n");
		qsort(t2,7,sizeof(char *),cmp_string);
		map(t2,7,sizeof(char*),print_string);
		printf("\n");
}
