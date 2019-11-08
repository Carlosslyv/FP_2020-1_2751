#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//declaramos las variables que utilizaremos 
	float x, y, z;
	//se guardan las variables flotantes y se cambian por argumentos 
	x=atof(argv[1]);
	y=atof(argv[2]);
	//cuando x siempre sea 1 se convertira a grados centigrados 
	if(x==1){
		z=(y*1.8)+32;
		//se efectua y se muestran resultados 
		printf("%.2f\n", z);
		return 0;
	}
	//si x vale 0, esto se convierte a grados fahrenheit
	else 
      if(x==0){
      	z=(y-32)/1.8;
      	//se efectua y mostramos los resultados
      	printf("%.2f\n", z);
      	return 0;
	  }
	return 0;  
}
