
#include <stdio.h>



#define MAX 50

struct estudiante
{
    char nom[35],direc[35];
    int edad;
} alumno[MAX];


void capturar (int x)
{
    for(int i=0;i<x;i++)
    {
        printf("\nNombre : "); scanf("%s",alumno[i].nom);
        printf("\nDomicilio: "); scanf("%s",alumno[i].direc);
        printf("\nEdad : "); scanf("%i",&alumno[i].edad);
        
    }
}

void mostrar (int x , int y)
{
    if(x==0) printf("NO HAS CAPTURADO\n");
    else
    {
        if (x < y)
        {
            y=x; printf("el total de datos capturados es : %i\n",x);
        }
    }
    
    for(int i=0;i<x;i++)
    {
        printf("\nNombre : %s \n",alumno[i].nom); 
        printf("\nDomicilio: %s \n",alumno[i].direc); 
        printf("\nEdad : %i",alumno[i].edad); 
        
    }
   
}








void  main()
{
    int opc,n=0,tmos;
    do
    {
        printf("\n1.-Capturar \n 2.- Mostrar \n 3.-Salir\n"); scanf("%i",&opc);
        
        if (opc==1)
        {
            printf("dame el total de alumnos a capturar: ");
            scanf("%i",&n);
            capturar(n);
        }
        
        if(opc == 2)
        {
            printf("dame el total de alumos a mostrar : ");
            scanf("%i",&tmos);
            mostrar(n,tmos);
        }
    }while(opc!=3); 
    
}

