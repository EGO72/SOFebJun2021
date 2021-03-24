#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int ready;
int pidHijoTermino2;

void signalHandler(int sig){
	pidHijoTermino2 = wait(NULL);
    printf("Mi hijo termino %d \n", pidHijoTermino2);
}

int main() {
	int pid = fork();
	int pidHijoTermino;
	if(pid == 0){
		// Proceso hijo
		printf("Soy el proceso hijo\n");
	} else{
		signal(17, signalHandler);
		printf("Soy el proceso padre y mi hijo es %d\n", pid);
		//pidHijoTermino = wait(NULL);
		while(1) {
			printf("Trabajando \n");
			sleep(1);
		}
	}
	printf("Terminado\n");
	return 0;
}