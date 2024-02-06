#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main () {

float Y;
printf("INGRESA Y : ");
scanf("%f",&Y);


if(    0<= Y  && Y<= 10    ) {
	
	float funcion;
	funcion = 4/Y - Y;
	printf("el resultado es %f " , funcion );
	
}
 
 

if (    11 < Y && Y<= 25   ) {
 	
 	float FUNCION;
 	FUNCION = pow (Y, 3) - 12;
 	printf("el resultado es igual a %f " , FUNCION);
 	
 }




if(   25<Y && Y<=50) {
	
	float Funcion;
	Funcion= pow (Y,2) + ( pow(Y,3) - 18);
	printf("el resultadooo es  %f " , Funcion);
	
}


if ( Y > 100) 
printf("el resultado es 0 ");




/*PROGRAMA DE EDGAR ALAN*/




}
