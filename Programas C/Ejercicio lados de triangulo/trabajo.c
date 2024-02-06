
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c;

float altura, base ,A;

int a1,a2,a3;

int opcion;


void datos() 


{
	printf("Ingresa el cateto opuesto  \n");
	scanf("%f",&a);
	printf("Ingresa el cateto adyacente \n");
	scanf("%f",&b);
	

}


void hipotenusa ()

{
	datos();

	c = sqrt ( pow(a,2) + pow (b,2) ); 
     printf("la hipotenusa es %f \n",c );

}



void area ()

{
	printf("Ingresa la altura \n");
	scanf("%f",&altura);
	printf("Ingresa la base \n ");
	scanf("%f",&base);

	A= base*altura / 2 ;

	printf("el area de tu triangulo es %f \n",A );



}


void angulo () 

{
    printf("ingresa el angulo 1 \n");
    scanf("%d",&a1);
     printf("ingresa el angulo 2 \n");
    scanf("%d",&a2);
    
    a3 = 180 - (a1+a2)  ;
    
    printf (" tu tercer angulo vale : %d" ,a3);
    
    
    
    
}




void menu ()


{
    
    printf(" * bienvenido * \n");
	
	printf(" que opcion eliges \n");
	
	
	printf("1.-calcular hipotenusa de un triangulo\n");
	printf("2.-calcular area de un triangulo \n");
	printf("3.-calcular tercer angulo de un triangulo\n");
	printf("   : ");
	scanf("%i", & opcion);
	
	
	
	switch (opcion) 
	
	
	{
	    
	    case 1 : 
	              hipotenusa();
	               
	                              break;
	                              
	      case 2 : 
	      
	              area();
	               
	                              break;
	                              
	                              
	      case 3 : 
	      
	              angulo();
	               
	                              break;
	                              
	   default : printf("opcion incorrecta ");
	    
	              break;


	}
    
    
    
}







void main()


{
    
        
    
    menu();
	
	    
	    
	    
   
	    
	    
	    
	
	
	
}







