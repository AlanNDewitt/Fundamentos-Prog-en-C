#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main () {


float A;
float B;
float P;

float res;

printf("ingresa NUMERADOR : ");
scanf("%f",&A);
printf("ingresa DENOMINADOR : ");
scanf("%f",&B);
printf("ingresa POTENCIA: ");
scanf("%f",&P);


res = pow ( A/B, P );
printf ("el resiltado es : %f " ,res );



float res1,res2,res3;
res1 = pow ( A, P );
res2 = pow ( B , P );
res3 = res1/res2;

printf ("La comprobacion  es : %f " ,res3 );

/* PROGRAMA DE EDGAR ALAN */








}
