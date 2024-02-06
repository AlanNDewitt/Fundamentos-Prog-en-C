#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>

#include <string.h>


char nombre1[100];
char nombre2[100];





void margen () 

{
	char caracter = 'W';

	gotoxy(3,25);
	//printf("\n\n");
	printf("                  * BIENVENIDO *                     ");
	gotoxy(4,0);
	//printf(" ingresa el CARACTER que quieres usar para el margen : ");
	//scanf("%c",&caracter);

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
	printf("*   * \n");

	

}




void datos1 ()

{  
	
    gotoxy(23,33);
	printf("* fgets y printfs * ");
	gotoxy(24,30);
	printf("Ingrese su nombre completo ");
	gotoxy(25,33);
	fgets(nombre1,100,stdin);
    


}


 void datos2 () 

{   
    
    gotoxy(30,33);
	printf(" * Scanf y printf * ");
	gotoxy(31,30);
	printf("Ingrese el nombre completo ");
	gotoxy(32,33);
	scanf("%s",nombre2);
	
	
}



void impresion1 (char nombre1[100])


{
	datos1();
	gotoxy(27,28);
	printf("Tu nombre es: %s  \n ",nombre1 );

}


void impresion2 (char nombre2[100])


{
	datos2();
	gotoxy(34,28);
	printf("Tu nombre es: %s \n",nombre2 );


}







void main ()

{

	//datos1();

	//datos2();

    
    caratula();

    //fflush(stdout);
	//system("clear");

	impresion1(nombre1);

	impresion2(nombre2);

	printf("\n\n\n\n");


    

}