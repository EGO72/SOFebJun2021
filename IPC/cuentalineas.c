#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
int count;
int main(){
	char c;
	while(read(0,&c,1)){
        if (c == '\n')
            count = count + 1;
	}
	if (c != '\n')
			 count = count + 1;
	printf("El numero de lineas es %d\n", count);
	return 0;
}