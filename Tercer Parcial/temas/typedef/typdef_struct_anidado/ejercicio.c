#include <stdio.h>

typedef int Entero;     // el int pasa hacer "Entero" es un identificador que hace referencia al int//
typedef char Caracter;  // es como crear una palabra reservada para el tipo de dato que queremos referirnos//

                                  // typedef  tipo de dato  identificador ; //

typedef struct
{
    Caracter nombre[20];    // vector de tipo Caracter y "Caracter" fue definido como "char"//
    Caracter ap[20];
    Caracter am[20];
    
    
}datos1;


typedef struct                   // con base a la sintaxis de typedef//  // typedef struct datos2 //  
{                               
   datos1 d1;                   //llamando la estructura anterior, y declarando la variable para acceder a ella
   Entero calificaciones[3];
    
}datos2;                             // datos2 sera el identificador de dicha estructura 
                                     // pero no tiene una variable para acceder a dicha estructura




void main()

{
    datos2 d2;                    // llamamos a la estructura y creamos la variable para acceder a ella//
    
    printf("ingresa nombre : ");
    scanf("%s",d2.d1.nombre);
    printf("\ningresa apellido paterno: ");
    scanf("%s",d2.d1.ap);
    printf("\ningresa el apellido materno :");
    scanf("%s",d2.d1.am);
    
    for(int i = 0 ; i<3; i++)
    {
        printf("ingresa la calificacion %i : ",i+1);
        scanf("%i",&d2.calificaciones[i]);
    }
    
    printf("\n\n\n");
    
    
    printf("te llamas : %s %s %s ", d2.d1.nombre,d2.d1.ap,d2.d1.am);
    
     for(int i = 0 ; i<3; i++)
    {
        printf("\ncalificacion %i : %i ",i+1,d2.calificaciones[i]);
       
    }

    
}

