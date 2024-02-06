#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan             */
int main () {
	
	int opcion;
	printf("\n***************************");
	printf("\n Que quieres convertir?   *");
	printf("\n                          *");
	printf("\n 1.- Pulgadas a Milimetros*");
	printf("\n 2.- Yardas a Metros      *");
	printf("\n 3.- Millas a Kilometros  *");
	printf("\n***************************");
	scanf("%d",&opcion);
	
	
	if(opcion==1){
		
		float pulgadas,milimetros;
		printf("ingresa tus pulgadas :  ");
		scanf("%f",&pulgadas);
		milimetros = pulgadas*25.4;
		printf("el resultado es : %f milimetros",milimetros);
		
		
		
		
	}
	
		if(opcion==2){
		
		float yardas,metros;
		printf("ingresa tus yardas :  ");
		scanf("%f",&yardas);
		metros = yardas*0.9144;
		printf("el resultado es : %f  metros",metros);
		
		
		
		
	}
	
	
	
		if(opcion==3){
		
		float kilometros,millas;
		printf("ingresa tus millas :  ");
		scanf("%f",&millas);
		kilometros = millas*1,609344;
		printf("el resultado es : %f kilometros ",kilometros);
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
}
