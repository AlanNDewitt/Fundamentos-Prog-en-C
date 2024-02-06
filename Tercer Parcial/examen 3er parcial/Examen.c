#include <stdio.h>
#include <gotoxy.h>

typedef int Entero;
typedef float Real;
typedef char String;


Entero vuelos=0,Registrados=0;

struct otros_datos
{
	Entero Numero_Pasajeros;
	Real Hora_Llegada;
	Real Hora_Salida;
	
}datos2;



struct Aeropuerto
{
	struct otros_datos datos2;

	Entero codigo;
	String Linea_Aerea[10];
	String Origen[15];
	String Destino[15];
	
}Vuelo[100];





void margen () 

{   
	system("clear");

	gotoxy(3,0);
	String caracter='W';
	gotoxy(3,30);
	printf(" * BIENVENIDO * ");

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
	String x;
    margen();   /*LLAMAMOS A LA FUNCION MARGEN */

	gotoxy(12,26);
	printf("INSTITUO POLITECNICO NACIONAL");
	gotoxy(14,31);
	printf("ESIME CULHUACAN");
	gotoxy(16,23);
	printf("Fundamentos de Programacion en C ");
	gotoxy(18,28);
	printf("Edgar Alan  ");



	gotoxy(23,31);
	printf("* Examen * \n");
	gotoxy(25,31);
	printf("CONTINUAR -ENTER-  ");
	scanf("%c",&x);
}




void add_vuelo()
{
	system("clear");

    vuelos=0;
    vuelos = vuelos + Registrados;

	printf("	*AGREGANDO VUELO* \n\n");

	printf("Ingresa la Linea Aera : ");
	scanf("%s",Vuelo[vuelos].Linea_Aerea);
	system("clear");

	printf("	*AGREGANDO VUELO* \n\n");
	printf("Ingresa el Origen (DDD) :");
	scanf("%s",Vuelo[vuelos].Origen);
	system("clear");

	printf("	*AGREGANDO VUELO* \n\n");
	printf("Ingresa el Destino (DDD) :");
	scanf("%s",Vuelo[vuelos].Destino);
	system("clear");

	printf("	*AGREGANDO VUELO* \n");
	printf(" Datos relacionados\n\n");
	printf("Ingresa Numero de Pasajeros :");
	scanf("%d",&Vuelo[vuelos].datos2.Numero_Pasajeros);
	system("clear");

	while (Vuelo[vuelos].datos2.Numero_Pasajeros < 1 || Vuelo[vuelos].datos2.Numero_Pasajeros > 400 )
	{
		system("clear");
		printf("	*AGREGANDO VUELO* \n");
        printf(" Datos relacionados\n\n");
	    printf("INGRESA DATOS CORRECTOS ***\n");
        printf("Ingresa Numero de Pasajeros :");
	    scanf("%d",&Vuelo[vuelos].datos2.Numero_Pasajeros);
	    system("clear");
	}

    printf("	*AGREGANDO VUELO* \n");
	printf(" Datos relacionados\n\n");
	printf("Ingresa la Hora de Salida (formato 24.00 hrs: ");
	scanf("%f",&Vuelo[vuelos].datos2.Hora_Salida);

	while(Vuelo[vuelos].datos2.Hora_Salida < 0.00 || Vuelo[vuelos].datos2.Hora_Salida > 23.59)
	{
		 system("clear");
		 printf("	*AGREGANDO VUELO* \n");
	     printf(" Datos relacionados\n\n");
	     printf("INGRESA DATOS CORRECTOS ***\n");
	     printf("Ingresa la Hora de Salida (formato 24.00 hrs: ");
	     scanf("%f",&Vuelo[vuelos].datos2.Hora_Salida);
         system("clear");
	}
    system("clear");
	printf("	*AGREGANDO VUELO* \n");
	printf(" Datos relacionados\n\n");
	printf("Ingresa la Hora de Llegada (formato 24.00 hrs: ");
	scanf("%f",&Vuelo[vuelos].datos2.Hora_Llegada);

	while(Vuelo[vuelos].datos2.Hora_Llegada < 0.00 || Vuelo[vuelos].datos2.Hora_Llegada > 23.59)
	{
		 system("clear");
		 printf("	*AGREGANDO VUELO* \n");
	     printf(" Datos relacionados\n\n");
	     printf("INGRESA DATOS CORRECTOS ***\n");
	     printf("Ingresa la Hora de Llegada (formato 24.00 hrs: ");
	     scanf("%f",&Vuelo[vuelos].datos2.Hora_Llegada);
         system("clear");
	}

	Vuelo[vuelos].codigo = 2000 - Registrados;


	Registrados = Registrados + 1 ;


}


void ver_vuelos()
{
	Entero y,W=2;
	system("clear");

	printf("CODIGO   Linea Aerea     Origen   Destino   Pasajeros   Salida   Llegada");

	if (Registrados == 0)
	{
		printf("\n\n\n 		Todavia no hay Vuelos Registrados");
	}

	for (vuelos = 0; vuelos < Registrados; ++vuelos)
	{
		gotoxy(W,0);
		printf("%i",Vuelo[vuelos].codigo);
		gotoxy(W,10);
		printf("%s",Vuelo[vuelos].Linea_Aerea);
		gotoxy(W,26);
		printf("%s",Vuelo[vuelos].Origen);
		gotoxy(W,37);
		printf("%s",Vuelo[vuelos].Destino);
		gotoxy(W,48);
		printf("%i",Vuelo[vuelos].datos2.Numero_Pasajeros);
		gotoxy(W,58);
		printf("%0.2f",Vuelo[vuelos].datos2.Hora_Salida);
		gotoxy(W,68);
		printf("%0.2f",Vuelo[vuelos].datos2.Hora_Llegada);

		W = W + 1;




	}

    
	printf("\n\n\n\n\n 			CONTINUAR = 1  ");
	scanf("%d",&y);


	system("clear");

	
}


void menu( Entero *opcion)
{
	
	system("clear");
	gotoxy(2,30);
	printf("* AEROPUERTO *");
	gotoxy(5,25);
	printf("1.-Agregar Vuelo");
	gotoxy(7,25);
	printf("2.-Ver Vuelos");
	gotoxy(9,25);
	printf("3.-SALIR");
	//gotoxy(11,25);
	//printf("4.-SALIR");

	gotoxy(13,25);
	scanf("%i",opcion);

		while(*opcion < 1 || *opcion > 3)
		{
			gotoxy(15,25);
			printf("INGRESA UNA OPCION CORRECTA ***");
			gotoxy(13,25); printf("                ");
			gotoxy(13,25);
	        scanf("%i",opcion);

		}

		switch (*opcion)
		{
			case 1 : 
			         add_vuelo();
   							           break;

			case 2 : 
                     ver_vuelos();
			                       	   break;

			case 3 : 
			                       break;
			
								
		}

}


void main ()
{
	Entero opcion;
    
    system("clear");
	caratula();

	do
	{
		system("clear");
		menu(&opcion);
		system("clear");
		
	} while (opcion < 3 || opcion > 3 );

	system("clear");
	gotoxy(20,30);
	printf("PROGRAMA TERMINADO\n\n\n");
    
    
}