#include <stdio.h>
#include <gotoxy.h>


struct calificaciones  // es necesario poner nombre si vamos a declarar sus variables despues del struct //
   {
         float calificaciones[3];
         char nombre[10];
         float promedio;
    
    
    
    
     }alumno[10];
     
     

void main()
{
    system("clear");

    int alumnos;
    float sumaC = 0;
    
    printf("cuantos alumnos vas a capturar : ");
    scanf("%i",&alumnos);
    
    for (int i = 0; i < alumnos; i++) //LECTURA//
    
    {
        printf("\nALUMNO %i \n\n",i+1);
        
        printf("ingresa tu nombre: ");
        scanf("%s",alumno[i].nombre);
        
         for(int j = 0; j < 3; j++)
         {
             printf("\ningresa tu calificacion %i : ",j+1);
             scanf("%f",&alumno[i].calificaciones[j]);
             
         }
        
        system("clear");
         
    }
    
    //printf("\n\n\n\n");
    
    
    
    for(int z = 0; z < alumnos; z++) // IMPRECION //
    {
         printf("\n\n\n Alumno : %s \n", alumno[z].nombre);
         
          sumaC = 0;
          for(int k = 0; k < 3; k++)
         {
             printf("\ntu calificacion %i : %0.2f",k+1,alumno[z].calificaciones[k]);
             sumaC = sumaC + alumno[z].calificaciones[k];
         }
         
         alumno[z].promedio = sumaC/3;
         printf("\npromedio de : %0.2f",alumno[z].promedio);
    }
     

     gotoxy(35,0);
}



