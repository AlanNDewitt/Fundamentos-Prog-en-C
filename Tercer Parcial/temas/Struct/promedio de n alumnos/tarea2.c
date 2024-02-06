#include <stdio.h>
#include <gotoxy.h>



struct calificaciones  // es necesario poner nombre si vamos a declarar sus variables despues del struct //
   {
         float calificaciones[3];
         char nombre[30];
         float promedio;

     }alumno[10];
     
     

void main()
{
    system("clear");

    int alumnos;
    float sumaC = 0;
    
    printf("cuantos alumnos vas a capturar : ");
    scanf("%i",&alumnos);

    	while(alumnos<1 || alumnos>10)
   		 {
    		system("clear");
    		printf("\n valor incorrecto *1 - 10*");
    		printf("\n\ncuantos alumnos vas a capturar : ");
       	    scanf("%i",&alumnos);
  		  }

  	system("clear");	  
    
    for (int i = 0; i < alumnos; i++) //LECTURA//
    
    {
        printf("\nALUMNO %i \n\n",i+1);
        
        printf("ingresa tu nombre: ");
        scanf("%s",alumno[i].nombre);
        system("clear");

        
         for(int j = 0; j < 3; j++)
         {
             printf("\ningresa tu calificacion %i : ",j+1);
             scanf("%f",&alumno[i].calificaciones[j]);

             	while(alumno[i].calificaciones[j] < 1 || alumno[i].calificaciones[j] > 10)
             	{
             		system("clear");
             		printf("\n Ingresa una calificacion Correcta *");
             		printf("\n\ningresa tu calificacion %i : ",j+1);
             	    scanf("%f",&alumno[i].calificaciones[j]);
             	}
             system("clear");
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
             printf("\n calificacion %i : %0.2f",k+1,alumno[z].calificaciones[k]);
             sumaC = sumaC + alumno[z].calificaciones[k];
          }
         
         alumno[z].promedio = sumaC/3;
         printf("\n promedio de : %0.2f",alumno[z].promedio);

         if (alumno[z].promedio > 7.5)
         {
         	printf("\n  * APROBADO *");

         }
         if (alumno[z].promedio <= 7.5) 
         {
         	printf("\n  * REPROBADO *");
         }
    }
     



     gotoxy(35,0);
}


