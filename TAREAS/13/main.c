#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//se declaran variables
	int numeros[argc-1];
	//se declara y se hace una lista de numeros enteros
	int i=0, j=1, n;
	//asignamos valores a las variables
	while(i<argc-1){
		n=atoi(argv[j]);
		//se copia argv a la nueva lista de enteros 
		numeros[i]=n;
		i++;
		j++;
	}
	int temporal;
	//se agrego esta variable para no perder datos anteriores 
	for(i=1; i<argc-1; i++){
		for(j=0; j<argc-1-i; j++){
			if(numeros[j]>numeros[j+1]){
				//intercambiamos los numeros de dicha forma para poder compararlos 
				temporal=numeros[j];
				//se guardan en temporal
				numeros[j]=numeros[j+1];
				//esto hace que retroseda al numero siguiente
				numeros[j+1]=temporal;
				//lo que guardamos en temporal se cambia a lo siguiente 
			}
		}
	}
	for(int i=0; i<argc-1; i++){
		//con este for haremos que se impriman resultados 
		printf("%i\n", numeros[i]);
		//se imprimen los resultados 
	}
}
