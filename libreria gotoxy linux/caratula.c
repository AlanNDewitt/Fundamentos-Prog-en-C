#include <stdio.h>
#include <gotoxy.h>

char caracter;
float a,b;
int opcion;
short repetir;


void margen () 

{
	//gotoxy(3,0);
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


void caratula() 

{
	      /*LLAMAMOS A LA FUNCION MARGEN */

	gotoxy(12,30);
	printf("INSTITUO POLITECNICO NACIONAL");
	gotoxy(14,30);
	printf("ESIME CULHUACAN");
	gotoxy(16,30);
	printf("Fundamentos de Programacion en C ");
	gotoxy(18,30);
	printf("Edgar Alan  ");

	

}



void datos () 

{
    gotoxy(34,35);
	printf("ingresa el primer numero: ");
	gotoxy(35,35);
	scanf("%f",&a);
	gotoxy(34,35);
	printf("ingresa el segundo numero: ");
	gotoxy(35,47);
	scanf("%f",&b);

}


float suma () 

{
	datos();
	gotoxy(34,35);
	return a+b;

}

float resta () 

{
	datos();
	gotoxy(34,35);
	return a-b;
}

float multiplicacion () 

{
	datos();
	gotoxy(34,35);
	return a*b;

}

float divicion () 

{
	datos();
	gotoxy(34,35);
	return a/b;

}


void menu () 

{
	gotoxy (23,35);
	printf("OPERACIONES");

	 for (int i = 34; i < 47; ++i)
	 {
	 	gotoxy(22,i);
	 	printf("%c",caracter );
	 }

	 for (int i = 34; i < 47; ++i)
	 {
	 	gotoxy(24,i);
	 	printf("%c",caracter );
	 }

	 printf("\n");

	 gotoxy(27,35);
	 printf(" 1.- SUMA ");
	 gotoxy(28,35);
	 printf(" 2.- RESTA");
	 gotoxy(29,35);
	 printf(" 3.- MULTIPLICACION");
	 gotoxy(30,35);
	 printf(" 4.-DIVICION");

	 gotoxy(32,35);
	 printf("¿QUE OPERACION ELIGES?: ");
	 gotoxy(32,58);
	 scanf("%i",&opcion);


	 while (opcion > 4 || opcion < 1) 

	 {
	 	gotoxy(34,6);
	 	printf("* ERRORES * ");

	 	gotoxy(34,35);
	 	printf("opcion INCORRECTA \n");
	 	printf("elige una opcion correcta \n");
	 	scanf("%i",&opcion);

	 }



	 switch ( opcion ) 


	 {  

	 	case 1 :   gotoxy(32,35);
	 	           printf("-------------------------");
	 	           gotoxy(33,45);
	 	           printf("SUMA");
	 	           gotoxy(35,42);
	 	           printf("+");
	 	           gotoxy(35,37);
	 	           printf("el resultado es:  %0.2f ", suma() );

	 	                                        break ;

	 	case 2 :   gotoxy(32,35);
	 	           printf("-------------------------");
	 	           gotoxy(33,45);
	 	           printf("RESTA");
	 	           gotoxy(35,42);
	 	           printf("-");
	 	           gotoxy(35,37);
	 	           printf("el resultado es:  %0.2f ", resta() );
 
	 	                                        break ;

	 	case 3 :   gotoxy(32,35);
	 	           printf("-------------------------");
	 	           gotoxy(33,40);
	 	           printf("MULTIPLICACION");
	 	           gotoxy(35,42);
	 	           printf("*");
	 	           gotoxy(35,37);
	 	           printf("el resultado es:  %0.2f ", multiplicacion() );

	 	                                        break ;                                        

        
        case 4 :   gotoxy(32,35);
	 	           printf("-------------------------");
	 	           gotoxy(33,45);
	 	           printf("DIVICION");
	 	           gotoxy(35,42);
	 	           printf("/");
	 	           gotoxy(35,37);
	 	           printf("el resultado es:  %0.2f ", divicion() );

	 	                                        break ;

	 }


	 gotoxy(34,2);
	 printf("* PROGRAMA TERMINADO *");
	 gotoxy(35,1);
	 printf("***************************");
	 gotoxy(36,1);
	 printf("______________" );

   

   


}








  void main ()

{
	do {

		
   
    margen();
	caratula();
	menu();

	//system("clear");
    	

	gotoxy(40,35);
	printf("¿DESEAS REPERIR EL PROGRAMA ?      SI = 1   NO = 0 ");
	gotoxy(41,50); 
	scanf("%hd",&repetir);

	fflush(stdout);
	system("clear");


	} while (repetir==1);

	//gotoxy(70,35);

	
}