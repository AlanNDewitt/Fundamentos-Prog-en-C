#include <stdio.h>


typedef int Entero;
typedef float Flotante;



typedef struct 
{
    Entero x;
    Flotante y;
    
} Estructura;




void main()

{
    Estructura Objeto;
    
    Entero z;
    
    printf("ingresa un numero");
    scanf("%i",&z);
    
    printf("ingresa el entero : ");
    scanf("%i",&Objeto.x);
    
    printf("\n ingresa el flotante : ");
    scanf("%f",&Objeto.y);
    
    printf("\n\n\n");
    
    
    printf("tu entero : %i",Objeto.x);
    printf("\n\n tu floatante es : %0.1f",Objeto.y);
    printf("\n el valor de z es : %i ",z);
    
    
}



