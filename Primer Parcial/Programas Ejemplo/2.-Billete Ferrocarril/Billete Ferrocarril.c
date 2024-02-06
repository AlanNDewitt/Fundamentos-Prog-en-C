#include <stdio.h>


int main() {


int km,dias;
printf("\n Bienvenido a la Estacion");
printf("\n Cuantos km deseas recorrer en Ferrocarril?");
scanf("%d",&km);
printf("\n Cuantos Dias deseas quedarte en tu destino?");
scanf("%d",&dias);


if ( dias>12 && km> 600.25) {

printf("\n Tienes 3 porciento de Descuento");
int a,b,c;
a= km*0.24;
b= a*0.03;
c= a-b;
printf("\n El precio de tu voleto con Descuento es : %d ",c);


}

else {

printf("\n Loading...............");
int a,b,c;
a= km*0.24;

printf("\n El precio de tu voleto  es : %d ",a);


}




/*PROGRAMA DE EDGAR ALAN*/













	
}
