#include <stdio.h>
#include <stdlib.h>
//esto servira para devolver el numero
int valor(char n){
	int z;
	switch(n){
		case 'J':
		    z=10;
		    break;
		case 'Q':
		    z=10;
			break;
		case 'K':
		    z=10;
			break;
		case 'A':
		    z=11;
			break;
		case 'j':
		    z=10;
			break;
		case 'q':
		    z=10;
			break;
		case 'k':
		    z=10;
			break;
		case 'a':
		    z=11;
			break;						    
	}
	return 0;
}
int main(int argc, char*agrv[]){
	int imprimir, 
	coi;
	//coi es sinonimo de char 
	for (int i=1; i<argc; i++){
		//coi tendra un valor booleano
		coi=argv[i][0]=='J'||argv[i][0]=='j'||
		argv[i][0]=='Q'||argv[i][0]=='q'||argv[i][0]=='K'
		||argv[i][0]=='K'||argv[i][0]=='A'||argv[i][0]=='a';
		if (coi==1){
			imprimir= valor(argv[i][0]);
		}
		else{
			imprimir= atoi(argv[i]);
		}
		printf("%i\n", imprimir);
	}
	return 0;
}



























