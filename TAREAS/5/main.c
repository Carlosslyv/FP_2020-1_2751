#include <stdio.h>
#include <stdlib.h>
int valor (char n)
//esto nos servira para devolver un numero de un caracter
{
	int z;
	switch(n)
	{
		case 'j':
		case 'q':
		case 'k':
		      z=10;
		break;
		
		case'a':
		      z=11;
		break;	  	  	
	}
	return z;
}
int main(int argc, char*argv[])
{
	int imprimir;
	coi; //es lo ultimo de int o char
	for(int i=1; i<argc; i++)
	//for para que empiece a recorrer la lista en el subindice 1
	{
		coi=argv[i][0]=='j'|| argv[i][0]=='q'||argv[i][0]=='a';
		if(coi==1)
		{
			printf=valor(argv[i][0]);
		}
		else
		{
			printf=atoi(argv[i]);
		}
		printf("%i\n", printf);
	}
	return 0;
}



























