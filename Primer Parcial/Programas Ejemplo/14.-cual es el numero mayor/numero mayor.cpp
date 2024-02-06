#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan               */
int main () {
	
	float a;
	float b;
	float c;
	
	printf("Ingresa el primer numero :");
	scanf("%f",&a);
	printf("Ingresa el segundo numero : ");
	scanf("%f",&b);
	printf("Ingresa el tercer numero : ");
	scanf("%f",&c);
	
	if (   a>=b && a>=c   )
		printf("es el mayor %f",a );
	  else 
	        if (b>=c)
			 printf("es mayor %f ",b);
			  else 
			  printf("el mayor es %f",c);
	
	









}
