#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan             */
int main () {
	

int clave;

	printf("\n*********************************************");
	printf("\n           * TIENDA DE VIDEOJUEGOS *        *");
	printf("\n                                            *");
	printf("\n   CLAVE |         PRODUCTO      |  PRECIO  *");
	printf("\n    1.-             FIFA20          $900    *");
	printf("\n    2.-          HALO INFINITE      $1200   *");
	printf("\n    3.-             GEARS 5         $1000   *");
	printf("\n    4.-          METRO EXODUS       $850    *");
	printf("\n    5.-           DESTINY 2         $700    *");
	printf("\n    6.-         MODERN WARFARE      $1000   *");
	printf("\n    7.-             GTA V           $700    *");
	printf("\n*********************************************");
	printf("\n opcion:   ");
	scanf("%d",&clave);
	    
	    if (clave==1){
	    	int unidades,precio;
	    	printf("\ncuantas unidades deseas comprar de este producto");
	    	scanf("%d",&unidades);
	    	precio=unidades*900;
	    	printf("\n*******************************************************************");
	    	printf("\nelegiste : * FIFA20 * con %d unidades, el total a pagar es * $ %d *" ,unidades,precio);
	    	printf("\n*******************************************************************");
	    	
		}
	    
	     if (clave==2){
	    	int unidades,precio;
	    	printf("\ncuantas unidades deseas comprar de este producto");
	    	scanf("%d",&unidades);
	    	precio=unidades*1200;
	    	printf("\n*******************************************************************");
	    	printf("\nelegiste : * HALO IF * con %d unidades, el total a pagar es * $ %d *" ,unidades,precio);
	    	printf("\n*******************************************************************");
	    	
		}
	    
	    
	    
	     if (clave==3){
	    	int unidades,precio;
	    	printf("\ncuantas unidades deseas comprar de este producto");
	    	scanf("%d",&unidades);
	    	precio=unidades*1000;
	    	printf("\n*******************************************************************");
	    	printf("\nelegiste : * GEARS 5 * con %d unidades, el total a pagar es * $ %d *" ,unidades,precio);
	    	printf("\n*******************************************************************");
	    	
		}
	    
	     if (clave==4){
	    	int unidades,precio;
	    	printf("\ncuantas unidades deseas comprar de este producto");
	    	scanf("%d",&unidades);
	    	precio=unidades*850;
	    	printf("\n***********************************************************************");
	    	printf("\nelegiste : *METRO EXODUS* con %d unidades, el total a pagar es * $ %d *" ,unidades,precio);
	    	printf("\n***********************************************************************");
	    	
		}
		
		
		 if (clave==5){
	    	int unidades,precio;
	    	printf("\ncuantas unidades deseas comprar de este producto");
	    	scanf("%d",&unidades);
	    	precio=unidades*700;
	    	printf("\n*******************************************************************");
	    	printf("\nelegiste : * DESTINY 2 * con %d unidades, el total a pagar es * $ %d *" ,unidades,precio);
	    	printf("\n*******************************************************************");
	    	
		}
	    
	    
	    
	     if (clave==6){
	    	int unidades,precio;
	    	printf("\ncuantas unidades deseas comprar de este producto");
	    	scanf("%d",&unidades);
	    	precio=unidades*1000;
	    	printf("\n***************************************************************************");
	    	printf("\nelegiste : * MODERN WARFARE * con %d unidades, el total a pagar es * $ %d *" ,unidades,precio);
	    	printf("\n***************************************************************************");
	    	
		}
		
		 if (clave==7){
	    	int unidades,precio;
	    	printf("\ncuantas unidades deseas comprar de este producto");
	    	scanf("%d",&unidades);
	    	precio=unidades*700;
	    	printf("\n*******************************************************************");
	    	printf("\nelegiste : * GTAV * con %d unidades, el total a pagar es * $ %d *" ,unidades,precio);
	    	printf("\n*******************************************************************");
	    	
		}
	}
