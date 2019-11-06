#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char*argv[])// son parametros que sirven para meter una base y su exponente a aumentar
{
	int a= atoi(argv[1]);
	//esto nos sirve para la base
	int b= atoi(argv[2]);
	//esto nos sirve para el exponente a aumentar
	int c= pow(a,b);
	printf("%i\n", c);
	return 0;
}
