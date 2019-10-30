#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argv[])
{
	//se declara la variable y se asignan valores 
	double x=0;
	
	//se contruye la estructura con for 
	for(int i=1; i<argc; i++){
		double y=atof(argv[i]);
		x=y+x;
	}
	
	//se hace la operacion para el promedio 
	double promedio=x/(argc-1);
	printf("%.2lf\n", promedio);
	
	return 0;
}
