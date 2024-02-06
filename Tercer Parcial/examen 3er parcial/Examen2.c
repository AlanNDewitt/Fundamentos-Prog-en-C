#include <stdio.h>
#include <gotoxy.h>

typedef int Entero;
typedef float Real;
typedef char String;


Entero Registros;



struct datos_generales
{
	String nombre[10];
	Entero edad;
	
}datos2;


struct materias
{
	String nombre_materia[20];
	
}materia[5];



struct datos_principales
{ 
	struct datos_generales datos2;
	Entero codigo;
	Entero salario;
	struct materias materia[4];
	Entero materias_imparte;
	
}profesor[10];



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
	printf("Edgar Alan ");



	gotoxy(23,31);
	printf("* Examen * \n");
	gotoxy(25,31);
	printf("CONTINUAR -ENTER-  ");
	scanf("%c",&x);
}



void agregar_profesor(Entero X)
{
	system("clear");
	

	X=0;
	X = X + Registros;

	printf("	*AGREGANDO Profesor* \n\n");
	printf("Ingresa Nombre : ");
	scanf("%s",profesor[X].datos2.nombre);
	system("clear");

	printf("	*AGREGANDO Profesor* \n\n");
	printf("Ingresa Edad : ");
	scanf("%i",&profesor[X].datos2.edad);
	system("clear");

	while(profesor[X].datos2.edad < 18 || profesor[X].datos2.edad > 70)
	{
		system("clear");
		printf("	*AGREGANDO Profesor* \n");
		printf("INGRESA DATOS CORRECTOS ***\n\n");
	    printf("Ingresa Edad : ");
	    scanf("%i",&profesor[X].datos2.edad);
	    system("clear");
	}

	printf("	*AGREGANDO Profesor* \n\n");
	printf("Ingresa Salario (5000 - 30,000): ");
	scanf("%i",&profesor[X].salario);
	system("clear");

	while(profesor[X].salario < 5000 || profesor[X].salario > 30000) 
	{
		system("clear");
		printf("	*AGREGANDO Profesor* \n");
		printf("INGRESA DATOS CORRECTOS ***\n\n");
		printf("Ingresa Salario (5000 - 30,000): ");
	    scanf("%i",&profesor[X].salario);
	    system("clear");
	}

	printf("	*AGREGANDO Profesor* \n\n");
	printf("¿Cuantas Materias imparte? (MAX 4) : ");
	scanf("%i",&profesor[X].materias_imparte);
	system("clear");

	while(profesor[X].materias_imparte < 1 || profesor[X].materias_imparte > 4)
	{
		system("clear");
		printf("	*AGREGANDO Profesor* \n\n");
		printf("INGRESA DATOS CORRECTOS ***\n\n");
		printf("¿Cuantas Materias imparte? (MAX 4) : ");
	    scanf("%i",&profesor[X].materias_imparte);
	    system("clear");
	}

	for (Entero o = 0; o < profesor[X].materias_imparte; ++o)
	{
		system("clear");
		printf("	*AGREGANDO Profesor* \n\n");
		printf("Calculo\nFisica\nQuimica\nProgramacion\n\n");
		printf("Ingresa Materia %i (ESCRITA): ",o+1);
		scanf("%s",profesor[X].materia[o].nombre_materia);
		system("clear");
		
	}

	profesor[X].codigo = 8000 + Registros;
	Registros = Registros + 1 ;


}


void listar_profesores(Entero R)
{
	system("clear");

	Entero Z=2,y,S;

	printf("CODIGO   Nombre      salario   materias que imparte ");

	if (R == 0)
	{
		printf("\n\n\n 		Todavia no hay Profesores Registrados");
	}

	for (Entero i = 0; i < R; ++i)
	{
		gotoxy(Z,0);
		printf("%i",profesor[i].codigo);
		gotoxy(Z,10);
		printf("%s",profesor[i].datos2.nombre);
		gotoxy(Z,23);
		printf("%i",profesor[i].salario);
		gotoxy(Z,35);

		S = Z;

		for (Entero j = 0; j < profesor[i].materias_imparte; ++j)
		{ 


			gotoxy(S,35);
			printf("%s \n",profesor[i].materia[j].nombre_materia);
			S = S + 1;
			
		}
	 printf("-------------------------------------------------------");

		Z = Z + 5;
		
	}


	printf("\n\n\n\n\n 			CONTINUAR = 1  ");
	scanf("%d",&y);


	system("clear");

}




void salario_mas_alto(Entero Profesores_registados)
{
	system("clear");
	Entero a;
	Real max=0;
	String maxi[20];

	if ( Profesores_registados == 0)
	{
		printf("\n\n\n\n 	Todavia no Hay Profesores_registados");
	}


	for (Entero k = 0; k < Profesores_registados; ++k)
	{
		if (profesor[k].salario > max )
		{
			max = profesor[k].salario;
			maxi == profesor[k].datos2.nombre;
		}
	}
    
    system("clear");
	printf("el salario mas alto es de : %s \n con salrio de %0.2f ", maxi, max);


	printf("\n\n\n\n\n 			CONTINUAR = 1  ");
	scanf("%d",&a);


	system("clear");
}




void listar_profesores_por_materia()
{
	system("clear");
	Entero q;
	Entero eleccion;
	printf("\n\n 		1.-Calculo\n2.-Fisica\n3.-Quimica\n4.-Programacion\n\n\n");
	printf("elige la opcion (numero) ");
	scanf("%i",&eleccion);

	while (eleccion < 1 || eleccion > 4)
	{
		system("clear");
		printf("OPCION INCORRECTA ***");
		printf("\n\n 		1.-Calculo\n2.-Fisica\n3.-Quimica\n4.-Programacion\n\n\n");
	    printf("elige la opcion (numero) ");
	    scanf("%i",&eleccion);

	}

	system("clear");

	printf("Profesores para eleccion %i : \n", eleccion);

	for (Entero l = 0; l < Registros; ++l)
	{
		for (Entero h = 0; h < 4; ++h)
		{
			
            if (eleccion == 1)
            {	
				if (profesor[l].materia[h].nombre_materia == "Calculo")
				{
					printf("%s",profesor[l].datos2.nombre);

				}
            }

            if (eleccion == 2)
            {
         
				if (profesor[l].materia[h].nombre_materia == "Fisica")
				{
					printf("%s",profesor[l].datos2.nombre);

				}
		    }


		    if (eleccion == 3)
		    {
				if (profesor[l].materia[h].nombre_materia == "Quimica")
				{
					printf("%s",profesor[l].datos2.nombre);

				}
            }

            if (eleccion == 4)
            {
				if (profesor[l].materia[h].nombre_materia == "Programacion")
				{
					printf("%s",profesor[l].datos2.nombre);

				}
            }

		}
		
	}

	printf("\n\n\n\n\n 			CONTINUAR = 1  ");
	scanf("%d",&q);


}



void menu( Entero *opcion)
{
	Entero x;
	system("clear");
	gotoxy(2,30);
	printf("* Plataforma Docente *");
	gotoxy(5,25);
	printf("1.-Agregar Profesor");
	gotoxy(7,25);
	printf("2.-Listar Profesores");
	gotoxy(9,25);
	printf("3.-Profesor con salio mas alto");
	gotoxy(11,25);
	printf("4.-listar_profesores por materia");
	gotoxy(13,25);
	printf("5.SALIR");

	//gotoxy(11,25);
	//printf("4.-SALIR");

	gotoxy(14,35);
	scanf("%i",opcion);

		while(*opcion < 1 || *opcion > 5)
		{
			gotoxy(18,25);
			printf("INGRESA UNA OPCION CORRECTA ***");
			gotoxy(16,35); printf("                ");
			gotoxy(16,35);
	        scanf("%i",opcion);

		}

        

		switch (*opcion)
		{
			case 1 : agregar_profesor(x);
			        
   							           break;

			case 2 : listar_profesores(Registros);
                     
			                       	   break;

			case 3 : salario_mas_alto(Registros);
			                       
			                       break;

            case 4 : listar_profesores_por_materia();
			                       
			                       break;			
								
		}

}





void  main()
{
	Entero opcion;
    
    system("clear");
	caratula();

	do
	{
		system("clear");
		menu(&opcion);
		system("clear");
		
	} while (opcion < 5 || opcion > 5 );

	system("clear");
	gotoxy(20,30);
	printf("PROGRAMA TERMINADO\n\n\n");
	
}