#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	FILE *fileIn, *fileOut;
	int val;
	char ch;

	if (argc!=3) {
    		printf("Il me faut deux noms de fichiers\n");
    		return EXIT_FAILURE;
	}
	if ((fileIn= fopen(argv[1], "r")) == NULL) {
     		printf("Je ne peux pas ouvrir %s \n", argv[1]);
     		return EXIT_FAILURE;
	}
	if ((fileOut= fopen(argv[2], "w")) == NULL) {
     		printf("Je ne peux pas ouvrir %s\n", argv[2]);
     		return EXIT_FAILURE;
	}

	while ((val=fgetc(fileIn)) !=EOF) {
		printf("%d ", val);
		fputc(val, fileOut);
                ch = val; 
                printf("%d\n", ch);
	}

	fclose(fileIn);
	fclose(fileOut);
	return EXIT_SUCCESS;
}