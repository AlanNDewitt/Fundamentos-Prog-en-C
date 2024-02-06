#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan               */
int main () {
	
	int Y;
	
	printf("Ingresa  Y :  ");
	scanf("%d",&Y);
	
	
	
	
	if (Y%4==0){
		
	   int funcion;
	   funcion = pow (Y,3);
		printf("resultado es : %d",funcion);
		
	}
	
		if (Y%4==1){
		
	   int funcion;
	   funcion = (pow (Y,2)-14) / pow (Y,3);
		printf("resultado es : %d",funcion);
		
	}
	
	
		if (Y%4==2){
		
	   int funcion;
	   funcion = pow (Y,3) +5 ;
		printf("resultado es : %d",funcion);
		
	}
	
	
		if (Y%4==3){
		
	   int funcion;
	   funcion = sqrt(Y);
		printf("resultado es : %d",funcion);
		
	}
	
	
	
	
	
}
