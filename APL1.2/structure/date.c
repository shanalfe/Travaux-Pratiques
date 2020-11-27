#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){

time_t tempo = time(NULL);

	struct tm * date = localtime(&tempo);	
	
	printf("%04d/%02d/%02d \n", date -> tm_year+1900, date -> tm_mon,date -> tm_mday );
	return EXIT_SUCCESS;
    
    return 0;
}
