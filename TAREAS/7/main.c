#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//declaramos las variables que ocuparemos
	int a;
	int b;
	int c=1;
	a= atof(argv[1]);
	b= atof(argv[2]);
	//ahora decidimos donde guardara 
	for(int i=0; i<b; i++){
		//decimos donde se guardara y por cual se multiplicara
		c=c*a;
	}
	//se imprimen los resultados
	printf("%.2d\n", c);
	return 0;
}
