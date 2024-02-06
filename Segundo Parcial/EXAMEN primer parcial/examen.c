#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int Opcion;
    printf("hola que deseas hacer");
    printf("\n1.-calcular Fuerza , Masa , Aceleracion");
    printf("\n2.-Determinar si un compuesto es ALCANO, ALQUENO , ALQUINO");
    printf("\n3.-Calcular Velocidad , tiempo, Distancia   ");
    scanf("%i",&Opcion);
    
    if (Opcion == 1){
    	
    
    	
    	int opcion;
    	printf("\n opcion 1");
    	printf("que deseas calcular ");
    	 printf("\n 1.-Fuerza");
         printf("\n 2.-Masa");
         printf("\n 3.- Aceleracion");
         scanf("%d",&opcion);
         
            if( opcion == 1) {
         	    int masa;
             	int aceleracion;
         	    int Fuerza;
                 printf("Ingresa tu MASA ");
         	     scanf("%d",&masa);
         	     printf("ingresa tu aceleracion ");
         	     scanf("%d",&aceleracion);
         	     Fuerza = masa*aceleracion;
         	     printf("La fuerza es %d Newtons",Fuerza);
         	
         	
	                         }
    
             if( opcion == 2) {
         		int masa;
         	    int aceleracion;
         	    int fuerza;
         	    printf("Ingresa tu Fuerza ");
         	    scanf("%d",&fuerza);
         	    printf("ingresa tu aceleracion ");
         	    scanf("%d",&aceleracion);
         	    masa = fuerza/aceleracion;
         	    printf("La Masa es %d ",masa);
         		
         		
		                       }
    
                  if( opcion == 3) {
         		int masa;
         	    int aceleracion;
         	    int fuerza;
         	    printf("Ingresa tu Fuerza ");
         	    scanf("%d",&fuerza);
         	    printf("ingresa tu masa ");
         	    scanf("%d",&masa);
         	    aceleracion = fuerza/masa;
         	    printf("La ACELERACION es %d ",aceleracion);
         		
         		
		              }
    
    
    
}





if(Opcion == 2){
	int enlaces;
	printf("\nOpcion 2");
	printf("\nCuantos pares de enlaces tienes tu compuesto");
	scanf("%d",&enlaces);
	
	if(enlaces == 1){
		
		printf("ES ALCANO");
	}
	if (enlaces == 2){
		printf("es ALQUENO");
	}
	if (enlaces==3){
		printf(" es ALQUINO");
	}
	if (enlaces<1 || enlaces>4) {
		printf("ingresaste algo mal");
	}
}




if (Opcion == 3){
	
	int OP;
	printf("\n Elegiste la opcion 3");
	printf("\nque quieres calcular");
	     printf("\n 1.-Velocidad");
         printf("\n 2.-Tiempo");
         printf("\n 3.- Distancia");
        scanf("%d",&OP);
        
        
        
        
        
        
        
             if(OP==1){
             	int distancia;
             	int tiempo;
             	int velocidad;
             	printf("ingresa tu distancia");
             	scanf("%d",&distancia);
             	printf("ingresa tu tiempo");
             	scanf("%d",&tiempo);
             	velocidad = distancia/tiempo;
             	printf("La Velocidad es %d", velocidad);
             	
             	
			 }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
}











}


