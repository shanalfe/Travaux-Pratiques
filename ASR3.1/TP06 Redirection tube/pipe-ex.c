#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char const *argv[]) {
	
	/*Déclaration des variables*/
	int p[2];
	pipe(p); //Initialisation du tube
	pid_t pid = getpid();


	/*Pf1*/
	if (fork() == 0) {

		/*pf1f1*/
		if (fork() == 0) {
			read(p[0], &pid, sizeof(pid_t));

			while(1) {
				sleep(3);
				printf("PID : %d\n", pid);
			}
		}

		close(p[0]);
	}


	/*Pf2*/
	if (fork() == 0) {
		write(p[1], &pid, sizeof(pid_t));
		close(p[1]);
	}


	return 0;
}