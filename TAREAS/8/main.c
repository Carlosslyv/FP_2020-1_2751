#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char*argv[]){
	double x, y, z;
	x=atof(argv[1]);
	y=atof(argv[2]);
	
	if(x==1)
	//mientras x sea 1 se convierten en grados centigrados 
	{
		z=(y-32)/1.8;
		printf("%.2f\n", z);
		return 0;
	}
	else if(x==0)
		//si x es 0 se convierten en grados Farenheit
	{
		z=32+(y*1.8);
		printf("%.2f\n", z);
		return 0;
	}	
	return 0;
}

