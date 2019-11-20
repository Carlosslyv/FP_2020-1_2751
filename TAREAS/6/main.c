#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[]){
	int s=1;
	int a, b, c;
	//declaramos variables que utilizaremos durante el proceso
	for(int i=1; i<argc; i++){
		//en este paso comienzan a mostrarse las variables 
		b=atoi(argv[i]);
		s=s*b;
	}
	for(int x=1; argc; x++){
		//en este paso empezamos a checar las variables 
		c=atoi(argv[x]);
		a=s/c;
		printf("%i\n", a);
	}
	return 0;
}
