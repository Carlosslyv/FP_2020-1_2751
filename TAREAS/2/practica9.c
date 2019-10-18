#include <stdio.h>
int main ()
{
	int a=0,x,n;
	        printf("ingrese numero\n");
	        scanf("%d", &n);
	        for (x=1 ; x<(n+1); x++){
	        if (n%x==0){
			    a++;	
			   }
            }
            if (a!=2){
            	pritnf("no es primo");
            	}else{
            	printf("es primo");
			}
			
return 0;
}


