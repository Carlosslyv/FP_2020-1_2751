#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//se declara lista
	//declaramos la suma
	int lista[argc],suma=0;
	//declaramos promedio
	float promedio;
	//este for es para agregar argv dentro de la lista 
	for(int i=1;i<argc;i++){
		lista[i]=atoi(argv[i]);
    }
    //for se utliza para sumar los numeros dentro de la lista 
	for(int i=1;i<argc;i++){
		suma=suma+lista[i];
	}
	//en el promedio se divide la suma entre el argc-1
	promedio=(float)suma/(argc-1);
	pritnf("%f\n", promedio);	
	return 0;		
}

