#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>


void lecture(int *R,int *C)
{
	//int r,c;
	printf("\nIngresa los renglones: ");
	scanf("%i",R);
	//*R=r;

	printf("\nIngresa las columnas: ");
	scanf("%i",C);
	//*C=c;
	system("clear");
}

int MENU () 
{
	int opcion;
	printf("*****************\n");
	printf("* 1.-SUMA       *\n");
	printf("* 2.-RESTA      *\n");
	printf("* 3.-DIVICION   *\n");
	printf("* 4.-PRODUCTO   *\n");
	printf("*****************\n:");
    scanf("%i",&opcion);

    system("clear");

  return opcion;
}




void SUMA (int O,int U) 
{
	float M1[O][U];
	float M2[O][U];
    
    printf("********** SUMA **********\n");
	printf("******Primera Matriz *****\n");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			gotoxy(4,0);
			printf("ingresa el valor en la posicion [%i][%i] :      ",i+1,j+1 );
			gotoxy(4,42);
			scanf("%f",&M1[i][j]);
		}
	}

	system("clear");

    printf("********** SUMA **********\n");
	printf("*****Segunda Matriz***** \n ");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			gotoxy(4,0);
			printf("ingresa el valor en la posicion [%i][%i] :      ",i+1,j+1 );
			gotoxy(4,42);
			scanf("%f",&M2[i][j]);
		}
	}
    
    system("clear");
	
    printf("********** SUMA **********\n");
	printf("       *RESULTADO* \n ");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			printf("\nEl resultado es  [%i][%i] : %0.2f " ,i+1,j+1, M1[i][j]+M2[i][j] );
			
		}
	}

    //system("clear");
	printf("\n\n**********************");

}




void RESTA (int O,int U) 
{
	float M1[O][U];
	float M2[O][U];
    
    printf("********** RESTA **********\n");
	printf("******Primera Matriz *****\n");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			gotoxy(4,0);
			printf("ingresa el valor en la posicion [%i][%i] :     ",i+1,j+1 );
			gotoxy(4,42);
			scanf("%f",&M1[i][j]);
		}
	}

	system("clear");

    printf("********** RESTA**********\n");
	printf("*****Segunda Matriz***** \n ");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			gotoxy(4,0);
			printf("ingresa el valor en la posicion [%i][%i] :    ",i+1,j+1 );
			gotoxy(4,42);
			scanf("%f",&M2[i][j]);
		}
	}
    
    system("clear");
	
    printf("********** RESTA **********\n");
	printf("       *RESULTADO* \n ");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			printf("\nEl resultado es  [%i][%i] : %0.2f " ,i+1,j+1, M1[i][j]-M2[i][j] );
			
		}
	}

    //system("clear");
	printf("\n\n**********************");

}



void DIVICION (int O,int U) 
{
	float M1[O][U];
	float M2[O][U];
    
    printf("******* DIVICION **********\n");
	printf("******Primera Matriz *****\n");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			gotoxy(4,0);
			printf("ingresa el valor en la posicion [%i][%i] :    ",i+1,j+1 );
			gotoxy(4,42);
			scanf("%f",&M1[i][j]);
		}
	}

	system("clear");

    printf("******* DIVICION *********\n");
	printf("*****Segunda Matriz***** \n ");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			gotoxy(4,0);
			printf("ingresa el valor en la posicion [%i][%i] :      ",i+1,j+1 );
			gotoxy(4,42);
			scanf("%f",&M2[i][j]);
		}
	}
    
    system("clear");
	
    printf("******** DIVICION **********\n");
	printf("       *RESULTADO* \n ");

	for (int i = 0; i < O; ++i)
	{
		for (int j = 0; j < U; ++j)
		{
			printf("\nEl resultado es  [%i][%i] : %0.2f " ,i+1,j+1, M1[i][j] / M2[i][j] );
			
		}
	}

    //system("clear");
	printf("\n\n**********************");

}






void main ()
{
	int R,C;
	int o;

  do
  {
	//lecture(&R,&C);
	//fflush(stdout);
	system("clear");

	switch (MENU())
	{
		case 1 :  lecture(&R,&C);
		          SUMA(R,C);
		                   		    break;
		case 2 : lecture(&R,&C);
		         RESTA(R,C);
		                     		break;
		case 3 :  lecture(&R,&C);
		          DIVICION(R,C);
		                            break;                     


	}


   printf("\n Hacer otra Operacion  SI = 1 , NO = 2 \n: ");
   scanf("%i",&o);
   system("clear");

  } while (o==1);

	//printf("%i %i -----------\n",R,C );
	printf("\n\n\n PRGRAMA TERMINADO \n");

}