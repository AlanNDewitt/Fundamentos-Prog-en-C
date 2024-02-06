#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan             */
int main () {
	

int clave;
int dias;
int precio;
	printf("\n*************************************************");
	printf("\n           * BLOCK BUSTER 1980 *                *");
	printf("\n                                                *");
	printf("\n   CLAVE |          MOVIE             | PRECIO  *");
	printf("\n    1.-   Back to the Future Part III   $100    *");
	printf("\n    2.-              IT                 $70     *");
	printf("\n    3.-            TITANIC              $90     *");
	printf("\n    4.-         TERMINATOR II           $85     *");
	printf("\n    5.-            MATRIX               $99     *");
	printf("\n    6.-          FIGHT CLUB             $60     *"); 
	printf("\n*************************************************");
	printf("\n  *RECARGO POR DIA DE ATRASO $10*");
	printf("\n                                                 ");
	printf("\n opcion:   ");
    
	
	
	scanf("%d",&clave);
	
	
	
	   if (clave==1){
	   		printf("\n cuantos dias de atraso tienes ? *");
	   		scanf("%d",&dias);
	   		precio = (dias*10) + 100;
	   		printf("\n**********************************");
	     	printf("\n   Debes pagar : * %d *          *",precio);
            printf("\n**********************************");

	   }
	    
	    
	     if (clave==2){
	   		printf("\n cuantos dias de atraso tienes ? *");
	   		scanf("%d",&dias);
	   		precio = (dias*10) + 70;
	   		printf("\n**********************************");
	     	printf("\n   Debes pagar : * %d *          *",precio);
            printf("\n**********************************");

	   }
	
	
	     if (clave==3){
	   		printf("\n cuantos dias de atraso tienes ? *");
	   		scanf("%d",&dias);
	   		precio = (dias*10) + 90;
	   		printf("\n**********************************");
	     	printf("\n   Debes pagar : * %d *          *",precio);
            printf("\n**********************************");

	   }
	
	          if (clave==4){
	   		printf("\n cuantos dias de atraso tienes ? *");
	   		scanf("%d",&dias);
	   		precio = (dias*10) + 85;
	   		printf("\n**********************************");
	     	printf("\n   Debes pagar : * %d *          *",precio);
            printf("\n**********************************");

	   }
	   
	   
	          if (clave==5){
	   		printf("\n cuantos dias de atraso tienes ? *");
	   		scanf("%d",&dias);
	   		precio = (dias*10) + 990;
	   		printf("\n**********************************");
	     	printf("\n   Debes pagar : * %d *          *",precio);
            printf("\n**********************************");

	   }
	
	            if (clave==6){
	   		printf("\n cuantos dias de atraso tienes ? *");
	   		scanf("%d",&dias);
	   		precio = (dias*10) + 60;
	   		printf("\n**********************************");
	     	printf("\n   Debes pagar : * %d *          *",precio);
            printf("\n**********************************");

	   }
	
	
	
	
	
	
	
}
