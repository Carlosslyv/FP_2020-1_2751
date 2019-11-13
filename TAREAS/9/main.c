#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//declarando las variables de entrada
	int t, suma;
	//sdeclaramos las variables que utilizaremos 
	t=atoi(argv[1]);
	suma=0
	//ponemos lo que se quiere realizar
	while (t!=0){
		//la funcion que queremos realizar empieza su proceso
		suma= suma+(t%10);
		//se hace la suma 
		t=(t/10);
		//aqui se hace la division 
	}
	printf("%i\n", suma);
	//se muestran los resultados 
	return 0;
}

