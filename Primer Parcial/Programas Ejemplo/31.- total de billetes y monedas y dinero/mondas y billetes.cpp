#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan             */
int main () {
	
int b20,b50,b100;
int m1,m5,m10;
int totalM,totalB;
int TOTAL;
int dolares;

	printf("\n Cuantos billetes de $20 tienes   ");
	scanf("%d",&b20);
	printf("\n Cuantos billetes de $50 tienes   ");
	scanf("%d",&b50);	
	printf(" Cuantos billetes de $100 tienes   ");
	scanf("%d",&b100);	
	
		printf("\n Cuantas monedas de $1 tienes   ");
	    scanf("%d",&m1);
		printf("\n Cuantas monedas de $5 tienes   ");
	    scanf("%d",&m5);	
		printf("\n Cuantas monedas de $10 tienes   ");
	    scanf("%d",&m10);	
	    
	    totalB = (b20*20) + (b50*50) + (b100*100);
	    totalM = (m1*1) + (m5*5) + (m10*10);
	    printf(" \n **************************************************************");
	    printf(" \n el total de dinero que hay en billetes es : %d pesos Mexicanos",totalB);
	    printf(" \n **************************************************************");
	    printf(" \n el total de dinero que hay en monedas es : %d pesos Mexicanos",totalM);
	    printf(" \n **************************************************************");
	    TOTAL= totalB+totalM;
	    printf(" \n el total de dinero que hay es : %d ",TOTAL);
	    printf(" \n **************************************************************");
	    printf(" \n Quieres ver cuanto es en DOLARES ? : ");
	    printf(" \n *   1.- SI      2.- NO   *");
	    printf(" \n respuesta: ");
	    scanf("%d",&dolares);
	    
	    if ( dolares == 1 ) {
		
	    int d ;
	    d = TOTAL/19.68;
	    printf("tienes %d  dolares " ,d);
}
	
	
	
	
}
