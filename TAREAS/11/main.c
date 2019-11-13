#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double raiz(double x, double tolerancia, double candidato){
	//declaramos las variables 
	double division, diferencia, promedio;
	//declaramos las operaciones a realizar
	division= x/candidato;
	diferencia= fabs(division-candidato);
	//esta es la operacion que se realizara 
	while (diferencia>tolerancia){
		//aqui se realiza la operacion de tolerancia y el diferencial
		division=x/candidato;
		diferencia=fabs(division-candidato);
		//se efectuan las operaciones correspondientes 
		promedio=(candidato+division)/2;
		//se saca el promedio 
		candidato=promedio;
		//se igualan ambas variables
	}
	return candidato;
}
int main(int argc, char*argv[]){
	//se declaran las variables nuevamente 
	double numero, tolerancia, candidato, ans;
	//se declaran los valores que pueden tomar cada uno de ellos
	numero=atof(argv[1]);
	candidato=atof(argv[3]);
	tolerancia=atof(argv[2]);
	// son las operaciones que se realizaran
	ans=raiz(numero, tolerancia, candidato);
	//aqui la raiz toma los resultados obtenidos de las operaciones anteriores 
	printf("%lf\n", ans);
	//mostramos el resultado
	return 0;
}
