#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <sys/wait.h>

int main(int argc,char * argv[]) {

	/*Déclaration des variables*/
	pid_t p;
	int *ptr;
	p = fork ();

	/*Dans le fils*/
	if (p == 0) {
		printf("Fils créé\n");
		printf("PID : %d PID père: %d\n", getpid(), getppid());
		sleep (4);
		printf("Bloqué 4 secondes\n");

		exit(2);

	} if (p> 0) { // Dans le père
		printf("PID : %d PID père: %d\n", getpid(), getppid());
		
		execl("/usr/bin/ls","ps","-ef",NULL);
		wait(ptr); //attends le fils
		
	}


}
