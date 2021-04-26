#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int varGlobal;

void signalHandler(int sig){
	printf("\nRecibi segnal %d\n",sig);
	if (sig == 2){
		varGlobal = 1;
	}
}

int main() {
	signal(2, signalHandler);
	while(1){
		printf("Trabajando\n");
		sleep(1);
		if (varGlobal==1){
			break;
		}
	}
	printf("Ya voy a terminar \n");
	return 0;
}