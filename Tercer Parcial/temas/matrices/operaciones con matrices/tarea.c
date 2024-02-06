#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>


float tamanio;
char nombre[30];
short opcion;

//float Matriz_1 [0][0];
//float Matriz_2 [0][0];



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



	gotoxy(23,30);
	printf("* Operaciones con Matrices  * \n");

	

}



void datos() {

    gotoxy(25,15);
    printf(" Ingresa el tamaño de la matriz *cuadrada*  [n x n] : ");
	scanf("%f",&tamanio);
	gotoxy(27,30);
	printf("Como se llamara la matriz: ");
	scanf("%s",nombre);

	

	
}



void suma (int o, char u[30]) {

	 
	float Matriz_1 [o][o];
	float Matriz_2 [o][o];

	

	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			gotoxy(27,30);
			printf("primera matriz *%s*                        " , u);
			gotoxy(28,30);
			printf("                                           ");
			gotoxy(29,30);
			printf("ingresa el numero en la posicion [%i][%i]  " , i+1,j+1); 
			gotoxy(29,70);
			printf("                ");
			gotoxy(29,70);
			scanf("%f", &Matriz_1[i][j] );
		}
	}

	


	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			gotoxy(27,30);
			printf("SEGUNDA MATRIZ                       ");
			gotoxy(28,30);
			printf("                                     ");
			gotoxy(29,30);
			printf("ingresa el numero en la posicion [%i][%i] " , i+1,j+1);
			gotoxy(29,70);
			printf("                ");
			gotoxy(29,70);
			scanf("%f", &Matriz_2[i][j] );
		}
	}

	printf("\n\n\n");
    

	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			
			printf("   La suma de [%i][%i] + [%i][%i]  " , i+1,j+1,i+1,j+1);
			
			printf(" es  %0.2f                                  \n ", Matriz_1 [i][j] + Matriz_2 [i][j] );
			
		}

	}




}





void resta (int o, char u[30]) {

	 
	float Matriz_1 [o][o];
	float Matriz_2 [o][o];

	

	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			gotoxy(27,30);
			printf("primera matriz *%s*                        " , u);
			gotoxy(28,30);
			printf("                                           ");
			gotoxy(29,30);
			printf("ingresa el numero en la posicion [%i][%i]  " , i+1,j+1); 
			gotoxy(29,70);
			printf("                ");
			gotoxy(29,70);
			scanf("%f", &Matriz_1[i][j] );
		}
	}

	


	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			gotoxy(27,30);
			printf("SEGUNDA MATRIZ                       ");
			gotoxy(28,30);
			printf("                                     ");
			gotoxy(29,30);
			printf("ingresa el numero en la posicion [%i][%i] " , i+1,j+1);
			gotoxy(29,70);
			printf("                ");
			gotoxy(29,70);
			scanf("%f", &Matriz_2[i][j] );
		}
	}

	printf("\n\n\n");
    

	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			
			printf("   La Resta de [%i][%i] - [%i][%i]   " , i+1,j+1,i+1,j+1);
			
			printf(" es  %0.2f                                  \n ", Matriz_1 [i][j] - Matriz_2 [i][j] );
			
		}

	}




}


void divicion (int o, char u[30]) {

	 
	float Matriz_1 [o][o];
	float Matriz_2 [o][o];

	

	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			gotoxy(27,30);
			printf("primera matriz *%s*                        " , u);
			gotoxy(28,30);
			printf("                                           ");
			gotoxy(29,30);
			printf("ingresa el numero en la posicion [%i][%i]  " , i+1,j+1); 
			gotoxy(29,70);
			printf("                ");
			gotoxy(29,70);
			scanf("%f", &Matriz_1[i][j] );
		}
	}

	


	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			gotoxy(27,30);
			printf("SEGUNDA MATRIZ                       ");
			gotoxy(28,30);
			printf("                                     ");
			gotoxy(29,30);
			printf("ingresa el numero en la posicion [%i][%i] " , i+1,j+1);
			gotoxy(29,70);
			printf("                ");
			gotoxy(29,70);
			scanf("%f", &Matriz_2[i][j] );
		}
	}

	printf("\n\n\n");
    

	for (int i = 0; i < o; ++i)
	{
		for (int j = 0; j < o; ++j)
		{
			
			printf("   La Divicion de [%i][%i] / [%i][%i]   " , i+1,j+1,i+1,j+1);
			
			printf(" es  %0.2f                                  \n ", Matriz_1 [i][j] / Matriz_2 [i][j] );
			
		}

	}




}



void menu () {

	gotoxy(25,15);
    printf("                    *Elige una Opcion*                                ");
    gotoxy(27,30);
	printf("     1.- SUMA                                                  ");
	gotoxy(28,35);
	printf("2.- Resta                                                 ");
	gotoxy(29,35);
	printf("3.- Divicion                                              ");
    gotoxy(31,35);
	printf("Opcion : ");
	scanf("%hd",&opcion);


    gotoxy(31,35); printf("                                            ");

	switch (opcion) 

    {
    	case 1 :
    	        gotoxy(25,15);
    	        printf("                    * SUMA *                                        ");
                
    			                        suma(tamanio,nombre);

    	          									break ;

        case 2 :  
        			gotoxy(25,15);
    	            printf("                    * RESTA *                                        ");
    				
    				                    resta(tamanio,nombre);

    	          									break ;


        case 3 :   

                gotoxy(25,15);
    	        printf("                    * DIVCION *                                        ");

    	                                divicion(tamanio,nombre);
    			


    	        
    	          									break ;


    	 
    	  default :  
    	             


    	             gotoxy(25,30);  
    	             printf("OPRCION INCORRECTA !                              ");   
    	             gotoxy(27,30);
					 printf("                                                  ");
					 gotoxy(28,35);
				   	 printf("                                                  ");
	                 gotoxy(29,35);
					 printf("                                                  ");
    				 gotoxy(31,35);
	    			 printf("                                                  ");


	} 




















}








void  main()
{

	caratula();
	datos();
	menu();
	
	printf("\n\n\n\n\n\n\n");
	
}