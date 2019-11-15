#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char*argv[]){
	//se declaran variables 
	double a, b, c, d, e, f,x1, x2, n, m, i1, i2, r1;
	//se declaran las variables que utilizaremos 
	a=atof(argv[1]);
	b=atof(argv[2]);
	c=atof(argv[3]);
	//declaramos los valores de las variables 
	if(a!=0){
		//es la condicion que usaremos 
		d=2*a;
		e=(b*b)-(4*a*c);
		//se hacen las operaciones correspondientes 
	if(e>=0){
		//se declara el valor para saber de donde empezara a tomar numeros 
		f=sqrt(e);
		x1=(b+f)/d;
		x2=(b-f)/d;
		//se efectuan las operaciones 
	if(x1==x2){
		//declarando
		printf("%.2lf\n", x1);
		//se muestra el resultado de la operacion
	} else{
		printf("%.2lf\n", x1);
		printf("%.2lf\n", x2); 
		//se realizan y muestran las operaciones 
    }
    } else{
    	
		n=(4*a*c)-(b*b);
		//se multiplican y despues se restan entre si 
		m=sqrt(n);
		//se realizan sqrt como operacion 
		i1=m/d;
		i2=m/d;
		//se dividen cada una de ellas 
		printf("%.2lf+%.2lf\n", r1, i1);
		printf("%.2lf-%.2lf\n", r1, i1);
		//se realizan y se muestran las operaciones 
		
	}	
	}	
	return 0;
}
