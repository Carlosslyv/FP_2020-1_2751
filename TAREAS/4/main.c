#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
	
	//se declaran variables
	double x=0;
	
	//aplicamos for 
	for(int i=1; i<argc; i++)
	{
		double y=atof(argv[i]);
		x=y+x;
	}
	
	//aplicamos la formula para sacar el promedio
	double promedio=x/(argc-1);
	printf("%.2lf\n", promedio);
	
	return 0;
}

