#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argv[]){
	double x, y;
	
	x= atof(argv[1]);
	y= atof(argv[2]);
	
	printf("la suma es %g\n", x+y);
	
	printf("la resta es %g\n", x-y);
	
	printf("la multiplicación %g\n", x*y);
	
	printf("la división es %.2lf\n", x/y);
	
	return 0;
}
