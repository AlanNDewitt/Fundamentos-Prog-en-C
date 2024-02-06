#include <stdio.h>
#include <gotoxy.h>


typedef int Entero;     
typedef char Caracter;  
typedef float Flotante;



typedef struct                  // la estructura datos1 esta inmersa dentro de datos2//
{
    Caracter nombre[20];   
    Caracter ap[20];
    Caracter am[20];   
    
}datos2;


typedef struct                    
{                               
   datos2 d2;                   //llamo a la estructura 2 y declaro su variable campo para acceder a ella//                     
   Flotante calificaciones[3];
   Flotante promedio; 
}datos1;                             




void main()

{  
	system("clear");

    Entero n;
	printf("\ncuantos alumnos quieres capturar : ");
	scanf("%i",&n);

        while ( n < 1)
        {
            system("clear");
            printf("\nIngresa un Valor correcto *");
            printf("\n\ncuantos alumnos quieres capturar : ");
            scanf("%i",&n);

        }

	system("clear");

    datos1 Alumno[n];   		// llamamos a la estructura y creamos la variable para acceder a ella//

    Flotante sumaC;    

    for (Entero i = 0; i < n ; ++i)
     {      
     	printf("\n Alumno %i \n\n",i+1);
    
    	printf("ingresa nombre : ");
   		scanf("%s",Alumno[i].d2.nombre);
    	printf("\ningresa apellido paterno: ");
    	scanf("%s",Alumno[i].d2.ap);
    	printf("\ningresa el apellido materno :");
    	scanf("%s",Alumno[i].d2.am);

    	system("clear");

    	 for(Entero j = 0 ; j < 3; j++)
    	 {
    	 	printf("\n Alumno %i \n",i+1);

        	printf("\ningresa la calificacion %i : ",j+1);
        	scanf("%f",&Alumno[i].calificaciones[j]);
        	system("clear");

                while(Alumno[i].calificaciones[j] < 1 || Alumno[i].calificaciones[j] > 10 )
                {
                    system("clear");
                    printf("\nIngresa un valor correcto *");
                    printf("\n\ningresa la calificacion %i : ",j+1);
                    scanf("%f",&Alumno[i].calificaciones[j]);

                }    
            system("clear");
    	 }

    	system("clear");


    }


    //printf("\n\n\n");
    system("clear");

    
    for (int i = 0; i < n; ++i)
    {
    	sumaC = 0;
    	printf("\nAlumno %i : %s %s %s \n\n",i+1, Alumno[i].d2.nombre,Alumno[i].d2.ap,Alumno[i].d2.am);
    
     	for(Entero k = 0 ; k<3; k++)
     	{
       		 printf("calificacion %i : %0.2f \n" , k+1 , Alumno[i].calificaciones[k]);

       		 sumaC = sumaC + Alumno[i].calificaciones[k];
       
     	}

     	Alumno[i].promedio = sumaC/3;
     	printf("Promedio : %0.2f ", Alumno[i].promedio);

     	if (Alumno[i].promedio <= 7.5)
     	{
     		printf("\n  * REPROBADO *");
     	}

     	else 
     	{
     		printf("\n  * APROBADO *");
     	}

        printf("\n\n\n");

    }

    


    
}

