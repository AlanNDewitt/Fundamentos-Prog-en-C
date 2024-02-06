#include <stdio.h>


struct datos2
{
    char nombre[10];
    char ap[10];
    char am[10];
    
}d2;


struct datos1
{
    struct datos2 d2;
    int calificaciones[3];
};






void lectura (struct datos1 *person)
{
    printf("ingresa el nombre : ");
    scanf("%s",person->d2.nombre);
    printf("\n apellido paterno: ");
    scanf("%s",person->d2.ap);
    printf("\n apellido materno : ");
    scanf("%s",person->d2.am);
    
    printf("\n\n\n");
    
    for(int i = 0; i<3; i++)
    {
        printf("ingresa calificacion %i : ",i+1);
        scanf("%i",&person->calificaciones[i]);
    }
}


void imprimir(struct datos1 person)
{
    printf("\n\n\n\n");
    printf(" *%s* *%s* *%s* \n",person.d2.nombre,person.d2.ap,person.d2.am);
    
    for(int i = 0; i<3; i++)
    {
        printf("\ncalificacion %i : *%i*\n",i+1,person.calificaciones[i]);
       
    }
    
}




void main()
{
    
 
   
  struct datos1 Persona;
   
   lectura(&Persona);
   imprimir(Persona);
  
   
   
    
}
