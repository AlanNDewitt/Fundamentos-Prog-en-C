#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main () {
int clave;
printf("\n******************************");
printf("\n Hola bienvenido al CALLBACK *");
printf("\n******************************");
printf("\n A donde deseas hacer tu llamada?");
printf("\n");
printf("\n clave |  ZONA");
printf("\n    1.-  USA ");
printf("\n    2.-  CANADA");
printf("\n    5.-  AMERICA DEL SUR");
printf("\n    6.-  AMERICA CENTRAL");
printf("\n    7.-  MEXICO");
printf("\n    9.-  EUROPA");
printf("\n    10.-  ASIA");
printf("\n    15.-  AFRICA");
printf("\n    20.-  OCEANIA ");
printf("\n opcion : ");
scanf("%d",&clave);


if( clave== 1) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.16;
	printf("\nEL COSTO ES : %f dolares ", costo);
	
}

if(clave==2) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.09;
	printf("\nEL COSTO ES : %f dolares ", costo);
}

if(clave==5) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.25;
	printf("\nEL COSTO ES : %f dolares ", costo);
}

if(clave==6) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.21;
	printf("\nEL COSTO ES : %f dolares ", costo);
}

if(clave==7) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.20;
	printf("\nEL COSTO ES : %f dolares ", costo);
}


if(clave==9) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.17;
	printf("\nEL COSTO ES : %f dolares ", costo);
}




if(clave==10) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.26;
	printf("\nEL COSTO ES : %f dolares ", costo);
}

if(clave==15) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.48;
	printf("\nEL COSTO ES : %f dolares ", costo);
}

if(clave==20) {
	
	float minutos,costo;
	printf("\n de cuantos minutos sera tu llamada ");
	scanf("%f",&minutos);
	costo= minutos*0.28;
	printf("\nEL COSTO ES : %f dolares ", costo);
}



if ( clave!=1 && clave!=2 && clave!=5 && clave!=6 && clave!=7 && clave!=9 && clave!=10 && clave!=15 && clave !=20) {
	
	printf("clave erronea");
}








}
