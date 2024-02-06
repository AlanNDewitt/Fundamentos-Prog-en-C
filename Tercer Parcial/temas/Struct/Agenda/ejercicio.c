#include <stdio.h>
#include <gotoxy.h>



typedef int Entero;
typedef char Caracter;

int USUARIOS=0,i=0;


struct datos_personales
{
	Caracter nombre[10];
	Caracter ap[10];
	Caracter am[10];
	Entero edad;

}datosP;


struct datos_laborales
{
	Entero tiempo_trabajo;
	Entero puesto; //trabajador gerente

	
}datosL;


struct datos_contacto
{
	Entero tel;
	
}datosC;



struct agenda
{
	struct datos_personales datosP;
	struct datos_laborales datosL;
	struct datos_contacto datosC;

	Caracter enfermedad[20];
    Entero Id;
	

	
}Persona[10];


void Add_User()
{
	system("clear");
    i=0;
    i = i + USUARIOS;

	
    	printf("* DATOS PERSONALES * \n");
    	printf("	PERSONA %i \n\n",i+1 );
    	printf("Nombre : ");
    	scanf("%s",Persona[i].datosP.nombre);
    	printf("\nApellido Paterno : ");
    	scanf("%s",Persona[i].datosP.ap);
    	printf("\nApellido Materno : ");
    	scanf("%s",Persona[i].datosP.am);
    	printf("\n Edad : ");
    	scanf("%i",&Persona[i].datosP.edad);

    		while(Persona[i].datosP.edad < 18 || Persona[i].datosP.edad > 70)
    		{
    			system("clear");
    			printf("* DATOS PERSONALES * \n");
    		    printf("	PERSONA %i \n\n",i+1 );
    			printf("INGRESA DATOS CORRECTOS *\n");
    			printf("\n Edad : ");
    		    scanf("%i",&Persona[i].datosP.edad);
    		}	

    	system("clear"); //------------------------------------------------------------

    	printf("* DATOS LABORALES * \n");
    	printf("	PERSONA %i \n\n",i+1 );
    	printf("Antiguedad en la empresa (años) : ");
    	scanf("%i",&Persona[i].datosL.tiempo_trabajo);

    		while(Persona[i].datosL.tiempo_trabajo < 1 || Persona[i].datosL.tiempo_trabajo > 20)
    		{
    			system("clear");
    			printf("* DATOS LABORALES * \n");
    			printf("	PERSONA %i \n\n",i+1 );
    			printf("INGRESA DATOS CORRECTOS ***\n");
    			printf("Antiguedad en la empresa (años) : ");
    		    scanf("%i",&Persona[i].datosL.tiempo_trabajo);
    		    system("clear");
    		}
        
        system("clear");
        printf("* DATOS LABORALES * \n");
    	printf("	PERSONA %i \n\n",i+1 );
    	printf("Puesto (Trabajador = 1 o Gerente = 2) : ");
    	scanf("%i",&Persona[i].datosL.puesto);

    		while (Persona[i].datosL.puesto < 1 || Persona[i].datosL.puesto > 2 )
    		{
    			system("clear");
    			printf("* DATOS LABORALES * \n");
    			printf("	PERSONA %i \n\n",i+1 );
    			printf("INGRESA DATOS CORRECTOS ***\n");
    			printf("Puesto (Trabajador = 1 o Gerente = 2) : ");
    	        scanf("%i",&Persona[i].datosL.puesto);
    	        system("clear");
    		}


    	system("clear"); //-----------------------------------------------------

    	printf("* DATOS DE CONTACTO * \n");
    	printf("	PERSONA %i \n\n",i+1 );
    	printf("NUMERO DE TELEFONO : ");
    	scanf("%i",&Persona[i].datosC.tel);

    	system("clear"); //------------------------------------------------------

    	Persona[i].Id = 1000+USUARIOS;
    	printf("\nTu Id es: %i " ,Persona[i].Id+USUARIOS);
    	
	USUARIOS= USUARIOS + 1;
	system("clear");


}




void delete()
{
	system("clear");
	Entero remove,identificador=0;
	printf("INGRESA El Id del Usuario a -Eliminar : -");
	scanf("%i",&remove);
	system("clear");

	if (remove < 1000 || remove > (1000 + USUARIOS))
	{
		printf("\n\n 	Id INCORRECTO ***");

	}

	else 
	{
		for (int k = 0; k < USUARIOS; ++k)
		{
			if (remove == Persona[k].Id)
			{
				identificador = k;

			}
		}

		Persona[identificador].Id = 0;

		for (Entero o = 0; o < 7; ++o)
		{
			Persona[identificador].datosP.nombre[o] = 'x' ;
		}

		Persona[identificador].datosP.edad = 0;
		Persona[identificador].datosL.tiempo_trabajo = 0;
		Persona[identificador].datosL.puesto = 0;
		Persona[identificador].datosC.tel = 0;

		printf("\n\n\n 		  EXITO AL ELIMINAR");
		

	}

 Entero x;
 printf("\n\n\n\n\n\n\n\n\n CONTINUAR = 1 ");
 scanf("%i",&x);
 system("clear");


}





void ver ()
{
    Entero x,y=2;     
	system("clear");

	printf("ID 	  NOMBRE 	  EDAD 	   ANTIGUEDAD 	  PUESTO 	TEL  	");

	if (USUARIOS == 0)
	{
		printf("\n\n\n 		Todavia no hay USUARIOS");
	}

	for (int j = 0; j < USUARIOS; ++j)
	{   

        gotoxy(y,0);
		printf("%i  ||",Persona[j].Id);
		gotoxy(y,9);
		printf(" %s  ",Persona[j].datosP.nombre);
		gotoxy(y,25);
		printf("|| %i  || ",Persona[j].datosP.edad);
		gotoxy(y,37);
		printf("|| %i  ||",Persona[j].datosL.tiempo_trabajo);
		gotoxy(y,48);
		if (Persona[j].datosL.puesto == 1)
		{
			printf(" trabajador ");
		}
		if (Persona[j].datosL.puesto == 2) 
		{
			printf(" Gerente ");


		}

		if (Persona[j].datosL.puesto == 0)
		{
			printf(" xxxxxxx");
		}

         gotoxy(y,62);
		printf("|| %i",Persona[j].datosC.tel);
		
		y++;

	}
	


	
   printf("\n\n\n\n\n\n\n\n\n CONTINUAR = 1 ");
   scanf("%i",&x);


}

void menu( Entero *opcion)
{
	
	system("clear");
	gotoxy(2,30);
	printf("* AGENDA *");
	gotoxy(5,25);
	printf("1.-Agregar Usuario");
	gotoxy(7,25);
	printf("2.-Eliminar Usuario");
	gotoxy(9,25);
	printf("3.-Ver AGENDA");
	gotoxy(11,25);
	printf("4.-SALIR");

	gotoxy(13,25);
	scanf("%i",opcion);

		while(*opcion < 1 || *opcion > 4)
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
					 Add_User();
									break;

			case 2 : delete();
			                       break;

			case 3 : ver();
			                       break;
			
								
		}

}






void main ()
{
	Entero opcion;
	
	
	do
	{
		system("clear");
		menu(&opcion);
		
	} while (opcion < 4 || opcion > 4 );

	system("clear");
	gotoxy(20,30);
	printf("PROGRAMA TERMINADO\n\n\n");
	
	
	
    
    
}
