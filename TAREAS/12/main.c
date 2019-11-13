#include <stdio.h>
#include <stdlib.h>
int saludos( int personas){
	//se declaran variables
	int res;
	int z;
	//se declaran los valores que pueden tomar cada una de las variables definidas
	if(personas==1){
		//aqui se desarrolla la primera funcion 
		return 0;
	}
	else{
		z=saludos(personas-1)+(personas-1);
		//se realizan operaciones
		return z;
	}
}
int main (int argc, char*argv[]){
	int a, ans;
	//se declaran los valores
	a=atoi(argv[1]);
	ans=saludos(a);
	// se llevan a cabo las dos funciones 
	printf("%i\n", ans);
	//se realiza y se muestra la operacion realizada
	return 0;
}

