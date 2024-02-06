#include <stdio.h>
#include <gotoxy.h>

char caracter;

float grados,resultado;
int opcion, repetir;




void margen () 

{   

	gotoxy(3,0);
	//printf("\n\n");
	printf("                  * BIENVENIDO *                     \n");
	gotoxy(4,0);
	printf(" ingresa el CARACTER que quieres usar para el margen : ");
	scanf("%c",&caracter);

	for (int i = 15; i < 71; ++i)    /*CADA FOR REPRESENTA EL MARGEN DE CADA LADO Y SUS CORDENADA */
	
	{
		gotoxy(10,i);
		printf("%c", caracter);
   
	}

	for (int i = 11; i < 21 ; ++i)
	{
		gotoxy(i,70);
		printf("%c", caracter);
	}

	for (int i = 70; i > 14; --i)
	{
		gotoxy(20,i);
		printf("%c", caracter);
	}

	for (int i = 20; i > 9; --i)

	{
		gotoxy(i,15);
		printf("%c", caracter);
		
	}

	
}


void caratula () 

{
	
    margen();   /*LLAMAMOS A LA FUNCION MARGEN */

	gotoxy(12,30);
	printf("INSTITUO POLITECNICO NACIONAL");
	gotoxy(14,35);
	printf("ESIME CULHUACAN");
	gotoxy(16,27);
	printf("Fundamentos de Programacion en C ");
	gotoxy(18,32);
	printf("Edgar Alan Suarez Vega ");



	gotoxy(23,35);
	printf("* Operaciones * \n");

}




float centigrados_a_fahrenheit ()

{
	gotoxy(30,31);  printf("                                 \n");
    gotoxy(28,31);  printf("                                 \n");
    gotoxy(26,31);  printf("                                 \n");
    gotoxy(27,31);  printf("                                 \n");
    gotoxy(23,33);  printf("Centigrados a Fahrenheit ");

    gotoxy(25,31);  printf("Ingresa los grados Centigrados : ");
	scanf("%f",&grados);
	resultado = ((((grados + 40) * 9) / 5) - 40);
    
    gotoxy(27,31); 
    return resultado;
	


}

float fahrenheit_a_centigrados () 

{
	gotoxy(30,31);  printf("                                 \n");
    gotoxy(28,31);  printf("                                 \n");
    gotoxy(26,31);  printf("                                 \n");
    gotoxy(27,31);  printf("                                 \n");
    gotoxy(23,33);  printf("Fahrenheit a Centigrados");

    gotoxy(25,31);  printf("Ingresa los grados Fahrenheit : ");
	scanf("%f",&grados);
	resultado = ((((grados + 40) * 5) / 9) - 40);

	gotoxy(27,31); 
	return resultado;
    
	

 
}


float centigrados_a_kelvins () 

{
	gotoxy(30,31);  printf("                                 \n");
    gotoxy(28,31);  printf("                                 \n");
    gotoxy(26,31);  printf("                                 \n");
    gotoxy(27,31);  printf("                                 \n");
    gotoxy(23,33);  printf("Centigrados a kelvins ");

    gotoxy(25,31);  printf("Ingresa los grados Centigrados : ");
	scanf("%f",&grados);
	resultado = (grados + 273.15);

    gotoxy(27,31);  
    return resultado;
	


}


float kelvins_a_centigrados () 

{
	gotoxy(30,31);  printf("                                 \n");
    gotoxy(28,31);  printf("                                 \n");
    gotoxy(26,31);  printf("                                 \n");
    gotoxy(27,31);  printf("                                 \n");
    gotoxy(23,33);  printf("kelvins a Centigrados        ");

    gotoxy(25,31);  printf("Ingresa los grados kelvins : ");
	scanf("%f",&grados);
	resultado = grados - 273.15 ;

    gotoxy(27,31);  
    return resultado;
	

}


void menu ()

{ 
	gotoxy(25,31);
	printf("1.-Centigrados a Fahrenheit ");
    gotoxy(26,31);
	printf("2.-Fahrenheit a Centigrados ");
    gotoxy(27,31);
	printf("3.-Centigrados a kelvins ");
    gotoxy(28,31);
	printf("4.-kelvins a Centigrados ");

    gotoxy(30,31);
	printf("Cual eliges : ");
	scanf("%d",&opcion);


	switch (opcion) 

    {
    	case 1 :  

    	         
    	        printf("El resultado es : %0.2f           ",centigrados_a_fahrenheit());

    	          									break ;

        case 2 :  

    	         printf("El resultado es : %0.2f           ",fahrenheit_a_centigrados());

    	          									break ;


        case 3 :  

    	        printf("El resultado es : %0.2f           ",centigrados_a_kelvins());

    	          									break ;

    	case 4 :  

    	          printf("El resultado es : %0.2f           ",kelvins_a_centigrados());

    	          									break ;  

    	case 5 :       

    	              gotoxy (35,35);
    				  printf("PROGRAMA TERMINADO ");

    	          									break ;  


    	 
    	  default :  
    	             gotoxy(23,31);  printf("  ERROR                      ");
                     gotoxy(25,31);  printf("                             ");
                     gotoxy(27,31);  printf("                             ");
                     gotoxy(28,31);  printf("                             ");


    	             gotoxy(26,31);  printf("OPRCION INCORRECTA !         ");   


	} 

          gotoxy(30,30);
    	  printf(" Deseas repetir el PROGRAMA ?  SI = 1   NO = 0 :" ); 
    	  scanf("%d",&repetir);
}









void main () 

{   
        
   

   do {

        caratula();

		// printf("\n\n\n\n\n");
    
		menu();

		fflush(stdout);
	    system("clear");
    
    }  while (repetir == 1);



	gotoxy (30,35);
    printf("PROGRAMA TERMINADO ");


	printf("\n\n\n\n\n");

	

}