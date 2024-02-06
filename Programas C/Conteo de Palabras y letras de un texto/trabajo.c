#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>

#include <string.h>


char texto[100];

int numero_letras = 0;
int numero_palabras = 1;
int espacios = 0 ;
int numeros = 0;
int mayusculas = 0;
int minusculas = 0;
 


void margen () 

{
	char caracter = 'W';

	gotoxy(3,25);
	//printf("\n\n");
	printf("           * BIENVENIDO *                     ");
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




void datos ()

{  
	
    gotoxy(23,16);
	printf("* PROGRAMA QUE CALCULA DATOS Gramaticales de un TEXTO * ");
	gotoxy(24,33);
	printf("Ingrese un Texto  ");
	gotoxy(26,32);
	fgets(texto,100,stdin);

	

	//printf("tu nombre tiene %li letras \n ", strlen(nombre) -1  );
   
}




void letras () 

{
	numero_letras = strlen(texto);           //funcion que cuenta caracteres incluyendo el nulo 
	//printf("\n tu texto tiene %i caracteres ", numero_letras - 1);

}


void palabras() 


{ 
	for (int i = 0; i < strlen(texto) ; ++i)  // podia ser tambien la variable "numero de letras"
	
	{
		
		if ( texto[i] == ' ' )
		{
			++numero_palabras ;
			++espacios;           //solo para conocer el dato y ocuparlo mas adelante
		}
	}

 //printf("\n tu nombre tiene %d palabras" ,numero_palabras);



}

void numero_letra () 



{
	for (int i = 0; i < strlen(texto); ++i)

	{
		if (isdigit (texto[i]) )
		{
			++numeros;
		}

		if (isupper(texto[i]) ) 
		{
			++mayusculas;

		}
		
		else 
		{
			++minusculas;

		}



	}


//printf("\n Letras Mayusculas : %d ", mayusculas);
 //printf("\n Letras minusculas : %d  ", minusculas - numeros - espacios);
 // printf("\n numeros : %d ", numeros);



}


 



void impresion ()


{
	printf("\n Tu Texno tiene : \n");
	printf("\n Numero de Caracteres: %i ", numero_letras - 1 -espacios);

	printf("\n Numero de palabras: %d  " ,numero_palabras);

	printf("\n Letras Mayusculas : %d ", mayusculas);
    printf("\n Letras minusculas : %d  ", minusculas - numeros - espacios -1);
    printf("\n numeros : %d ", numeros);

}










void main ()

{
	caratula();

	datos();

	letras();

	palabras();

	numero_letra();

	impresion();

    

    //fflush(stdout);
	//system("clear");



	printf("\n\n\n\n\n\n\n\n\n");



}