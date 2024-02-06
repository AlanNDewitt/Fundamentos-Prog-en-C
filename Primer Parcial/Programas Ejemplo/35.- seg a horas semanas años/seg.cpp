#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*           programa de Edgar Alan             */
int main () {
	

int opcion;
float seg;
    	 printf("introduce los segundos : ");
    	 scanf("%f",&seg);
          

	printf("\n**************************");
	printf("\n    a que lo convertimos *");
	printf("\n                         *");
	printf("\n    1.-  minutos         *");
	printf("\n    2.-  horas           *");
	printf("\n    3.-  semanas         *");
	printf("\n    4.-  años            *"); 
	printf("\n**************************");
	printf("\n opcion:   ");
    scanf("%d",&opcion);
    
    
    
    if (opcion==1){
    	
    	float minutos;
    	minutos = (seg)/(60) ;
    	printf("el resultado es %f minutos",minutos);
    	
	}
    
    
    if (opcion==2){
    	
    	float horas;
    	horas =  (seg)/(3600) ;
    	printf("el resultado es %f horas",horas);
    	
	}
    
     if (opcion==3){
    	
    	float semanas;
    	semanas =  (seg)/(604800) ;
    	printf("el resultado es %f semanas",semanas);
    	
	}
    
    if (opcion==4){
    	
    	float year;
    	year =  (seg)/(31536000) ;
    	printf("el resultado es %f años",year);
    	
	}
    
    if (opcion <= 0 || opcion >=5 )
    printf("opcion no valida");
    
    
    
}
