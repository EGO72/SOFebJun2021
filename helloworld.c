#include <stdio.h>
#include <stdlib.h>
int main(int numarg, char **argv){
    if(numarg==0 || numarg==1){
   	 printf("ERROR: No se introdujeron argumentos para sumar\n");
   	 return 1;
    }
    int sum;
    for(int i=1;i<numarg;i++){
   	 sum+=atoi(argv[i]);
    }
    printf("%d\n",sum);    
    return 0;
}