#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*           programa de Edgar Alan             */
int main () {
	
	float A;
	float B;
	float C;
	printf("ingresa 3 medidas para formar un triangulo ");
	scanf("%f%f%f",&A,&B,&C);
	
	  
	           if( A+B>C && A+C>B && B+C>A) {
	           	
			   		     float area,s,a;
						 s = (A+B+C)/2;
						 a = s * (s-A )* (s-B )* (s-C );       
		                 area = sqrt(a);
						printf("\n SI es un triangulo ");
						printf("\n con area de %f ",area);
			         
			         if (A==B && B==C) {
			         	printf("\n y es EQUILATERO ");
					 }
					 
					 if (A==B || C==A || B==C ) {
					 	printf("y es hisosceles");
					 }
					 
					 if(A!=B && B!=C) {
					 	printf(" y es ESCALENO");
					 }
					 
					
	             }
	
	            else {
	            	printf("no es un triangulo;");
				}
	









}
