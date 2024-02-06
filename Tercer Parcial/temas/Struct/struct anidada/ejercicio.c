#include <stdio.h>

//LAS ESTRUCTURAS HACEN ALUSION A UN CONTENEDOR DE PROPIEDADES DONDE UN OBJETO LAS TIENE//

struct datos                 
{
    int calificaciones[3];
    int estatura;
    
} alumno;      //ESTO VIENE SIENDO LOS OBJETOS 


struct nombre
{
    struct datos alumno; //SE LLAMA A LA ESTRUCTURA CON SU NOMBRE Y SU OBJETO QUE PASA A SER CAMPO O PROPIEDAD//
    char nom[10];
    char ap[10];
    char am[10];
} Alumno;          //ESTO VIENE SIENDO LOS OBJETOS
 


void main ()
{
    for(int i = 0; i<3; i++)
    {
        printf("ingresa tu calificacion %i  :  ",i+1);
        scanf("%i",&Alumno.alumno.calificaciones[i]);
        
    }
    
    printf("\ningresa tu estatura : ");
    scanf("%i",&Alumno.alumno.estatura);
    
    printf("\ningresa tu nombre :");
    scanf("%s",Alumno.nom);
    
    printf("ingresa tu apellido paterno: ");
    scanf("%s",Alumno.ap);
    
    printf("ingresa tu apellido materno: ");
    scanf("%s",Alumno.am);
    
    
    printf("\n\n\n");
    
    
    printf("te llamas : %s %s %s ",Alumno.nom,Alumno.ap,Alumno.am);
    
     for(int j = 0; j<3; j++)
    {
        printf("\ntu calificacion %i es : %i  ",j+1,Alumno.alumno.calificaciones[j]);
        
        
    }
    

    
}

