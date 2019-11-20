#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
	int numero;
	numero=strlen (argv[1]);
	//utilizamos strlen para saber cuantos digitos tiene 
	char argv[numero];
	int resultado=0;
	//empieza con el numero neutro aditivo 
	int digitos[numero];
	for (int i=0; i<numero; i++){
		//aqui se suman los caracteres 
		argc[i]= argv[1][i];
		digitos[i]=atoi (&argc[i]);
		resultado=resultado+digitos[i];
		//cada una se suma por separado
	}
	printf("%i\n", resultado);
	return 0;
}

