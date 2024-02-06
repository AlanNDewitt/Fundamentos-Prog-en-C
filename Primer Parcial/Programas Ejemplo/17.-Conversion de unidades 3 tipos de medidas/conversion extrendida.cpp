#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan             */
int main () {
	
	int opcion;
	printf("\n***************************");
	printf("\n Que quieres convertir?   *");
	printf("\n                          *");
	printf("\n 1.- Longitud             *");
	printf("\n 2.- Volumen              *");
	printf("\n 3.- Peso                 *");
	printf("\n***************************");
	printf("\n opcion:      ");
	scanf("%d",&opcion);
	
	
	if (opcion==1) {
		
		
		int A;
	printf("\n********************************************");
	printf("\n       * Medidas de Longitud*              *");
	printf("\n                                           *");
	printf("\n 1.- Pulgadas a Milimetros                 *");
	printf("\n 2.- Yardas  a Metros                      *");
	printf("\n 3.- Milla a Kilometros                    *");
	printf("\n 4.- Pulgada cuadrada a CM cuadrado        *");
	printf("\n 5.- Pie Cuadrado a Metro cuadrado         *");
	printf("\n 6.- Yarda cuadrada a Metro cuadrado       *");
	printf("\n 7.- ACRE a Hectareas                      *");
	printf("\n 8.- Milla cuadrada a Kilometros cuadrados *");
	printf("\n********************************************");
	printf("\n opcion:      ");
	scanf("%d",&A);
	
	
		if(A==1) {
			
			float pulgadas,milimetros;
		printf("ingresa tus pulgadas :  ");
		scanf("%f",&pulgadas);
		milimetros = pulgadas*25.4;
		printf("el resultado es : %f",milimetros);
			
		}
	
	
	    if(A==2){
	    	float yardas,metros;
		printf("ingresa tus yardas :  ");
		scanf("%f",&yardas);
		metros = yardas*0.9144;
		printf("el resultado es : %f",metros);
	    		
		}
	
	     if(A==3){
		 
		     float kilometros,millas;
		printf("ingresa tus millas :  ");
		scanf("%f",&millas);
		kilometros = millas*1.609344;
		printf("el resultado es : %f",kilometros);
		 
		 }
	
	      
	      if(A==4){
	      	
	      	float pulgadas,cm;
		printf("\ningresa tus pulgadas cuadradas :  ");
		scanf("%f",&pulgadas);
		cm = pulgadas*6.45;
		printf("\n el resultado es : %f centimetros cuadrados",cm);
	      	
		  }
	
	
	      if (A==5){
	      	
	      	float pies,metros;
		printf("ingresa tus pies cuadrados :  ");
		scanf("%f",&pies);
		metros = pies*0.09290304;
		printf("el resultado es : %f metros cuadrados",metros);
	      	
	      	
	      	
		  }
	
	        if (A==6){
	        	
	    float yardas,metros;
		printf("ingresa tus yardas cuadradas :  ");
		scanf("%f",&yardas);
		metros = yardas*0.83612736;
		printf("el resultado es : %f metros cuadrados ",metros);
			}
	
	         if(A==7) {
	         	
	         	float ACRE,HECTAREA;
		        printf("ingresa tu ACRE :  ");
		        scanf("%f",&ACRE);
		        HECTAREA = ACRE*0.40468564;
		        printf("el resultado es : %f Hectareas ",HECTAREA);
	         	
			 }
         
	            if (A==8){
	            	
	            	float millas,km;
		printf("ingresa tus millas cuadradas :  ");
		scanf("%f",&millas);
		km = millas*2.58998811;
		printf("el resultado es : %f km cuadrados ", km);
	            	
				}
	
	
	
	
	
	
	
    }


    if (opcion==2) {
    	int B;
    	printf("\n**********************************");
	    printf("\n *medidas de volumen*            *");
	    printf("\n                                 *");
      	printf("\n 1.- Pie cubico a Metro cubico   *");
    	printf("\n 2.- Yarda cubica a Metro cubico *");
    	printf("\n 3.- Pinta a Litros              *");
    	printf("\n 4.- Galon a Litros              *");
    	printf("\n**********************************");
    	printf("\n opcion:      ");
    	scanf("%d",&B);
    	
    	
    	
    	              if (B==1){
    	              	
    	              	float pies, metros;
		          		printf("ingresa tus pies cubicos :  ");
						scanf("%f",&pies);
						metros = pies*0.02832;
						printf("el resultado es : %f metros cubicos",metros);
    	              	
    	              	
    	              	
    	              	
					  }
    	
    	
    	               if (B==2) {
    	               	     
    	               	     float yardas, metros;
		          		printf("ingresa tus yardas cubicas :  ");
						scanf("%f",&yardas);
						metros = yardas*0.7692;
						printf("el resultado es : %f metros cubicos",metros);
    	               	
    	               	
    	               	
					   }
    	
    	                if (B==3) {
    	                	
    	                	 float litros,pintas;
		          		printf("ingresa tus pintas :  ");
						scanf("%f",&pintas);
						litros = pintas*0.473;
						printf("el resultado es : %f litros",litros);
    	                	
    	                	
						}
    	
    	                   if (B==4) {
    	                   	
    	                   	 float galones,litros;
		          		printf("ingresa tus galones :  ");
						scanf("%f",&galones);
						litros = galones*3.785;
						printf("el resultado es : %f litros",litros);
    	                   	
    	                   	
    	                   	
						   }
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
	}


      if (opcion==3) {
      	                 
      	                 int C;
    	printf("\n**********************************");
	    printf("\n    *medidas de peso*            *");
	    printf("\n                                 *");
      	printf("\n 1.- Onza a Gramos               *");
    	printf("\n 2.- Libra  a Kilogramos         *");
    	printf("\n 3.- Ton. Inglesa a Tonelada     *");
    	printf("\n**********************************");
    	printf("\n opcion:      ");
    	scanf("%d",&C);
      	
      	                   
      	                   if(C==1) {
			
			float onzas, gramos;
		printf("ingresa tus onzas :  ");
		scanf("%f",&onzas);
		gramos = onzas*28.35;
		printf("el resultado es : %f gramos ",gramos);
			
		}
      	
      	
      	if(C==2) {
			
			float libras,kilogramos;
		printf("ingresa tus libras :  ");
		scanf("%f",&libras);
	    kilogramos = libras*0.35459;
		printf("el resultado es : %f kg",kilogramos);
			
		}
      	
      	
      	if(C==3) {
			
			float ton, tonelada;
		printf("ingresa tus toneladas inglesas :  ");
		scanf("%f",&ton);
	    tonelada = ton*1.0160;
		printf("el resultado es : %f toneladas",tonelada);
			
		}
      	
      	
      	
	  }
    



if (opcion < 1 || opcion >= 4)
printf("NO SELECCIONASTE ALGO VALIDO ");




























































}
