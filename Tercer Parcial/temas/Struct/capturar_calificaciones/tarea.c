#include <stdio.h>


struct calificaciones  // es necesario poner nombre si vamos a declarar sus variables despues del struct //
   {
         int calificaciones[3];
         char nombre[10];
    
    
    
    
     }alumno[10];
     
     

void main()
{
    int alumnos;
    
    printf("cuantos alumnos vas a capturar : ");
    scanf("%i",&alumnos);
    
    for (int i = 0; i < alumnos; i++) 
    
    {
        printf("\nALUMNO %i \n\n",i+1);
        printf("ingresa tu nombre: ");
        scanf("%s",&alumno[i].nombre);
        
         for(int j = 0; j < 3; j++)
         {
             printf("\ningresa tu calificacion %i : ",j+1);
             scanf("%i",&alumno[i].calificaciones[j]);
             
         }
         
         
    }
    
    printf("\n\n\n\n\n");
    
    for(int z = 0; z < alumnos; z++)
    {
         printf("\n\n\n Alumno : %s \n", alumno[z].nombre);
         
          for(int k = 0; k < 3; k++)
         {
             printf("\ntus calificaciones son : %i",alumno[z].calificaciones[k]);
             
         }
         
         
    }
     

   
}

