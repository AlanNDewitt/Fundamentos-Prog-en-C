#include <stdio.h>
//#include <graphics.h>
#include <gotoxy.h>
#include <string.h>
#include <time.h>


int user;
int X=0; // NUMERO DE PAGO DE SERVICIOS O CONTADOR 
int Num_retiro=0; 
int Num_ingreso=0;
int Num_Deposito=0;




struct pagos_servicios
{
	int pago;
	
}pago_serv[10];


struct retiros
{
	int retiros_dinero;
	
}retiro[10];



struct ingresos
{
	int ingresos_dinero;

}ingreso[10];



struct depositar
{
	int deposito_dinero;
	
}deposito[10];



struct Acciones
{
	int pago_servicios; //VECES QUE SE REALIZA
	int retiros;
	int ingresos;
	int depositos;

	struct pagos_servicios pago_serv[10];
	struct retiros retiro[10];
	struct ingresos ingreso[10];

	struct depositar deposito[10];

}accion;


struct Servicios
{
	char Telmex[11];
	char Netflix[11];
	char CFE[11];
	char Agua[11];
	char Telcel[11];
	char ATyT[11];
	char SKY[11];
	char Xbox[11];
	char Apple[11];
	char Izzi[11];

	
}Servicio;

struct datos2
{
	char Nombre[10];
	char Apellido[10];
	int edad;
	
}Datos_Complementarios;


struct De_Usuarios
{
	struct datos2 Datos_Complementarios;
	 int Clabe_Inter_Bancaria;
	 int Numero_de_Cuenta;
	 int codigo;
     float saldo;
    struct Servicios Servicio;
    //struct Acciones accion;
	
}Usuario[10];



/*
 void recibo ()
{
	system("clear");
	int z;
	int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    //initwindow(100,100);
    int i,x,y;


    for(i=0;i<=1000;i++)
  {
    x=rand()%639;
    y=rand()%480;
    putpixel(x,y,15);
  }
  
    setcolor(WHITE);
    outtextxy(100,100,"HOLA MUNDO");

    printf("\n\n\n\n 1 para continuar");
    scanf("%i",&z);

    //delay(5000);
    getch();

    closegraph();
}
*/


void Recibo()
{
	system("clear");

	FILE *recibo;

	recibo = fopen("TIKET","w");
	if (recibo == NULL)
	{
		system("clear");
		printf("no se a podido crear recibo");
		exit(1);
	}


    
	fprintf(recibo, "		PAGO DE SERVICIOS \n");

	for (int i = accion.pago_servicios - 1 ; i > -1 ; i--)
	{
		fprintf(recibo, "Pago de Servicio %i  monto : $%i \n",i+1,accion.pago_serv[i].pago);
	}
	
	fprintf(recibo, "------------------------------------");


	fprintf(recibo, "\n		RETIROS  \n");

	for (int j = accion.retiros - 1 ; j > -1 ; j--)
	{
		fprintf(recibo, "Retiro de : $%i \n",accion.retiro[j].retiros_dinero);
	}
	fprintf(recibo, "------------------------------------");


	fprintf(recibo, "\n		INGRESOS  \n");

	for (int k = accion.retiros - 1 ; k > -1 ; k--)
	{
		fprintf(recibo, "Ingreso de : $%i \n",accion.ingreso[k].ingresos_dinero);
	}
	fprintf(recibo, "------------------------------------");








	    time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);  //HORA
        //gotoxy(3,6);
        fprintf(recibo,"\n\n %s\n",output);





	fprintf(recibo, "\n\n recibo a nombre de %s \n ",Usuario[user].Datos_Complementarios.Nombre);
	fclose(recibo);


	system("clear");
}


void limpiar_recibo()
{
	accion.pago_servicios = 0;
	accion.retiros = 0;
	accion.ingresos = 0;
	accion.depositos = 0;

	for (int i = 0; i < 10; ++i)
	{
		accion.pago_serv[i].pago=0;
		accion.ingreso[i].ingresos_dinero = 0;
		accion.retiro[i].retiros_dinero = 0;
		accion.deposito[i].deposito_dinero = 0;
	}

	X = 0;  // deberia decir numero de pagos
    Num_retiro=0; 
    Num_ingreso=0;
	
}


void margen_total ()
{
	char caracter = 'D';
	gotoxy(4,0);
	//printf(" ingresa el CARACTER que quieres usar para el margen : ");
	//scanf("%c",&caracter);

	for (int i = 1; i < 81; ++i)    /*CADA FOR REPRESENTA EL MARGEN DE CADA LADO Y SUS CORDENADA */
	
	{
		gotoxy(0,i);
		printf("%c", caracter);
		
  
	}

	for (int i = 1; i < 31 ; ++i)
	{
		gotoxy(i,80);
		printf("%c", caracter);
	}

	for (int i = 80; i > 0; --i)
	{
		gotoxy(30,i);
		printf("%c", caracter);
	}

	for (int i = 30; i > 0; --i)

	{
		gotoxy(i,0);
		printf("%c", caracter);
		
	}

}



void margen () 

{  
    margen_total();
	

	char caracter = 'W';

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
	char x;
    margen();   /*LLAMAMOS A LA FUNCION MARGEN */

	gotoxy(12,28);
	printf("INSTITUO POLITECNICO NACIONAL");
	gotoxy(14,35);
	printf("ESIME CULHUACAN");
	gotoxy(16,27);
	printf("Fundamentos de Programacion en C ");
	gotoxy(18,32);
	printf("Edgar Alan Suarez Vega ");

	gotoxy(23,35);
	printf("* PROYECTO * \n");
   
    gotoxy(28,30);
    printf("ENTER PARA CONTINUAR"); 
	scanf("%c",&x);

	system("clear");

}



void inicializar_datos()
{
		strcpy( Usuario[0].Datos_Complementarios.Nombre, "Alan");
		strcpy(Usuario[0].Datos_Complementarios.Apellido,"Suarez");
		Usuario[0].Datos_Complementarios.edad = 19 ;
		Usuario[0].Clabe_Inter_Bancaria = 123456789;
		Usuario[0].Numero_de_Cuenta = 987654321;
		Usuario[0].codigo = 1111;
		Usuario[0].saldo = 30500;

		
		strcpy(Usuario[0].Servicio.Telmex,"REFtlmx201");
		strcpy(Usuario[0].Servicio.Netflix,"REFntfx202");
		strcpy(Usuario[0].Servicio.CFE, "REFcfel203");
		strcpy(Usuario[0].Servicio.Agua,"REFwatr204");
		strcpy(Usuario[0].Servicio.Telcel,"REFtelc205");
		strcpy(Usuario[0].Servicio.ATyT,"REFatyt206");
		strcpy(Usuario[0].Servicio.SKY,"REFskai207");
		strcpy(Usuario[0].Servicio.Xbox,"REFxbox208");
		strcpy(Usuario[0].Servicio.Apple,"REFaple209");
		strcpy(Usuario[0].Servicio.Izzi,"REFiziz210");

	//-------------------------------------------------------------//
		
		strcpy(Usuario[1].Datos_Complementarios.Nombre, "Lara");
		strcpy(Usuario[1].Datos_Complementarios.Apellido,"Croft");
		Usuario[1].Datos_Complementarios.edad = 25 ;
		Usuario[1].Clabe_Inter_Bancaria = 124578963;
		Usuario[1].Numero_de_Cuenta = 147258369;
		Usuario[1].codigo = 2020;
		Usuario[1].saldo = 10500;

		strcpy(Usuario[1].Servicio.Telmex ,"REFtlmx301");
		strcpy(Usuario[1].Servicio.Netflix ,"REFntfx302");
		strcpy(Usuario[1].Servicio.CFE, "REFcfel303");
		strcpy(Usuario[1].Servicio.Agua,"REFwatr304");
		strcpy(Usuario[1].Servicio.Telcel,"REFtelc305");
		strcpy(Usuario[1].Servicio.ATyT,"REFatyt306");
		strcpy(Usuario[1].Servicio.SKY,"REFskai307");
		strcpy(Usuario[1].Servicio.Xbox,"REFxbox308");
		strcpy(Usuario[1].Servicio.Apple,"REFaple309");
		strcpy(Usuario[1].Servicio.Izzi,"REFiziz310");

	//-------------------------------------------------------------//
		
		strcpy( Usuario[2].Datos_Complementarios.Nombre, "Fernando");
		strcpy(Usuario[2].Datos_Complementarios.Apellido,"Ruiz");
		Usuario[2].Datos_Complementarios.edad = 30;
		Usuario[2].Clabe_Inter_Bancaria = 258753159;
		Usuario[2].Numero_de_Cuenta = 951235789;
		Usuario[2].codigo = 3001;
		Usuario[2].saldo = 0;

		strcpy( Usuario[2].Servicio.Telmex ,"REFtlmx401");
		strcpy( Usuario[2].Servicio.Netflix ,"REFntfx402");
		strcpy( Usuario[2].Servicio.CFE, "REFcfel403");
		strcpy( Usuario[2].Servicio.Agua,"REFwatr404");
		strcpy( Usuario[2].Servicio.Telcel,"REFtelc405");
		strcpy( Usuario[2].Servicio.ATyT,"REFatyt406");
		strcpy( Usuario[2].Servicio.SKY,"REFskai407");
		strcpy( Usuario[2].Servicio.Xbox,"REFxbox408");
		strcpy( Usuario[2].Servicio.Apple,"REFaple409");
		strcpy( Usuario[2].Servicio.Izzi,"REFiziz410");

	//-------------------------------------------------------------//

}




void Pago_de_Servicios(int x)
{
	int opcion,Monto;
	Monto = 0;
	char Referencia[11],Convenio[10];

	system("clear");
	margen_total();
	gotoxy(6,26);
	printf("*****************************");
	gotoxy(7,26);
	printf("*        BANCO UNSC         *");
	gotoxy(8,26);
	printf("*****************************");

	gotoxy(11,6);
	printf("*************");
	gotoxy(12,6);
	printf("* 1.-Telmex *");
	gotoxy(13,6);
	printf("*************");

	gotoxy(11,21);
	printf("**************");
	gotoxy(12,21);
	printf("* 2.-Netflix *");
    gotoxy(13,21);
    printf("**************");

    gotoxy(11,37);
    printf("**********");
    gotoxy(12,37);
	printf("* 3.-CFE *");
	gotoxy(13,37);
    printf("**********");

	gotoxy(11,49);
	printf("***********");
    gotoxy(12,49);
	printf("* 4.-Agua *");
	gotoxy(13,49);
	printf("***********");

	gotoxy(11,62);
	printf("*************");
	gotoxy(12,62);
	printf("* 5.-Telcel *");
	gotoxy(13,62);
	printf("*************");

	gotoxy(15,13);
	printf("***********");
	gotoxy(16,13);
	printf(" *6.-AT&T *");
	gotoxy(17,13);
	printf("***********");
	

	gotoxy(15,29);
	printf("**********");
	gotoxy(16,29);
	printf("* 7.-SKY *");
	gotoxy(17,29);
	printf("**********");

	gotoxy(15,43);
	printf("***********");
	gotoxy(16,43);
	printf("* 8.-Xbox *");
	gotoxy(17,43);
	printf("***********");

	gotoxy(15,57);
	printf("************");
	gotoxy(16,57);
	printf("* 9.-Apple *");
	gotoxy(17,57);
	printf("************");

	gotoxy(19,26);
	printf("************");
	gotoxy(20,26);
	printf("* 10.-Izzi *");
	gotoxy(21,26);
	printf("************");

	gotoxy(19,43);
	printf("*****************");
	gotoxy(20,43);
	printf("* 11.-OTRO .... *");
	gotoxy(21,43);
	printf("*****************");

	gotoxy(26,10);
	printf("Opcion : ______");
	gotoxy(26,20);
	scanf("%i",&opcion);

	while(opcion > 11 || opcion < 1)
	{
		gotoxy(27,40);
		printf("INGRESA UNA OPCION CORRECTA * * *");
		gotoxy(26,10);
		printf("Opcion : ______");
		gotoxy(26,20);
		scanf("%i",&opcion);

	}
	system("clear");

	int dif;

	switch (opcion)
	{
		case 1 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 
				 dif = strncmp(Usuario[user].Servicio.Telmex, Referencia, 10);


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.Telmex
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");
				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.Telmex
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;



		case 2 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 
				 dif = strncmp(Usuario[user].Servicio.Netflix, Referencia, 10);


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.Netflix
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");
				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.Netflix
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;



		case 3 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 dif = strncmp(Usuario[user].Servicio.CFE, Referencia, 10);  //COMPARA LAS CADENAS Y DEVUELVO LA DIFERENCIA


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.CFE
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");
				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.CFE
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;


		case 4 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 dif = strncmp(Usuario[user].Servicio.Agua, Referencia, 10);  //COMPARA LAS CADENAS Y DEVUELVO LA DIFERENCIA


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.Agua
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;

				 	  
				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");
				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.Agua
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;


		case 5 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 
				 dif = strncmp(Usuario[user].Servicio.Telcel, Referencia, 10);  //COMPARA LAS CADENAS Y DEVUELVO LA DIFERENCIA


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.Telcel
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");
				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.Telcel
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;


		case 6 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 dif = strncmp(Usuario[user].Servicio.ATyT, Referencia, 10);  //COMPARA LAS CADENAS Y DEVUELVO LA DIFERENCIA


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.ATyT
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");
				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.ATyT
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;


		case 7 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 dif = strncmp(Usuario[user].Servicio.SKY, Referencia, 10);  //COMPARA LAS CADENAS Y DEVUELVO LA DIFERENCIA


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.SKY
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");
				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.SKY
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;


		case 8 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 
				 dif = strncmp(Usuario[user].Servicio.Xbox, Referencia, 10);  //COMPARA LAS CADENAS Y DEVUELVO LA DIFERENCIA


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.Xbox
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");
				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.Xbox
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;


		case 9 : system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 dif = strncmp(Usuario[user].Servicio.Apple, Referencia, 10);  //COMPARA LAS CADENAS Y DEVUELVO LA DIFERENCIA


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.Apple
				     {
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");

				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.Apple
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;


		case 10 :system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa la Referencia Unica del Pago :");
				 scanf("%s",Referencia);
				 gotoxy(15,26);
				 printf("Ingresa el Monto : $");
				 scanf("%i",&Monto);

				 
				 dif = strncmp(Usuario[user].Servicio.Izzi, Referencia, 10);  //COMPARA LAS CADENAS Y DEVUELVO LA DIFERENCIA


				 if (Usuario[user].saldo > Monto)
				 {
				 	 if (dif == 0) //Referencia == Usuario[user].Servicio.Izzi	
				 	 {

				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;


				 	  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;

				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");

				     }


				     if ( dif < 0 || dif > 0 ) //Referencia  != Usuario[user].Servicio.Izzi
				     {
				 	  system("clear");
				      margen_total();

					  gotoxy(15,26);
					  printf("* OPERACION FALLIDA *");
					  gotoxy(16,26);
					  printf("(Verifique que ingreso bien los datos) ");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);

					  system("clear");
				     }


				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;

		case 11 :system("clear");
				 margen_total();
				 gotoxy(6,26);
			 	 printf("*****************************");
				 gotoxy(7,26);
				 printf("*        BANCO UNSC         *");
				 gotoxy(8,26);
				 printf("*****************************");
				 gotoxy(10,26);
	   			 printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
				 gotoxy(13,26);
				 printf("Ingresa el Convenio o Nombre (10 dig max): ");
				 scanf("%s",Convenio);
				 gotoxy(15,26);
				 printf("Ingresa la Referencia (10 dig max) : ");
				 scanf("%s",Referencia);
				 gotoxy(17,26);
				 printf("Ingresa el Monto: $ ");
				 scanf("%i",&Monto);


				 if (Usuario[user].saldo >= Monto)
				 {
				     
				 	  Usuario[user].saldo = Usuario[user].saldo - Monto;
				 	  system("clear");
				      margen_total();
					  gotoxy(15,26);
					  printf("OPERACION EXITOSA");
					  gotoxy(25,26);
					  printf("teclea 1 para CONTINUAR : ");
					  scanf("%i",&x);
					  system("clear");

					  accion.pago_servicios = accion.pago_servicios + 1; // cuenta los pagos realizados por sesion
	
					  accion.pago_serv[X].pago = accion.pago_serv[X].pago + Monto; 
					  X = X + 1;
				 }

				 if (Usuario[user].saldo < Monto)
				 {
				 	 system("clear");
				     margen_total();
					 gotoxy(15,26);
					 printf("* OPERACION FALLIDA *");
					 gotoxy(16,26);
					 printf("(No puedes Pagar esa Cantidad) ");
					 gotoxy(25,26);
					 printf("teclea 1 para CONTINUAR : ");
					 scanf("%i",&x);
					 system("clear");
				 }
		break;

	}

	


}



void Retirar_o_Ingresar(int x)
{
	int o;
	float Cantidad;
	system("clear");
	margen_total();
	gotoxy(6,26);
	printf("*****************************");
	gotoxy(7,26);
	printf("*        BANCO UNSC         *");
	gotoxy(8,26);
	printf("*****************************");
	gotoxy(10,26);
	printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
	gotoxy(13,26);
	printf("1.-Retirar");
	gotoxy(15,26);
	printf("2.-Ingresar");
	gotoxy(17,26);
	printf("3.-Cancelar Operacion");
	gotoxy(19,26);
	scanf("%i",&o);

		while(o<1 || o > 3)
		{
			gotoxy(27,30);
		    printf("INGRESA UNA OPCION CORRECTA * * *");
		    gotoxy(19,26);
		    printf("                                 ");
		    gotoxy(19,26);
		    scanf("%i",&o);
		}


	if (o == 1 )
	{
		if (Usuario[user].saldo < 1)
		{
			system("clear");
			margen_total();
			gotoxy(6,26);
			printf("*****************************");
			gotoxy(7,26);
			printf("*        BANCO UNSC         *");
			gotoxy(8,26);
			printf("*****************************");
			gotoxy(10,26);
			printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
			gotoxy(13,26);
			printf("* NO HAY SUFICIENTE DINERO PARA RETIRAR *");
			gotoxy(25,26);
			printf("teclea 1 para CONTINUAR : ");
			scanf("%i",&x);
			system("clear");
			system("clear");
		}

		if(Usuario[user].saldo > 0 )
		{
			system("clear");
			margen_total();
			gotoxy(6,26);
			printf("*****************************");
			gotoxy(7,26);
			printf("*        BANCO UNSC         *");
			gotoxy(8,26);
			printf("*****************************");
			gotoxy(10,26);
			printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
			gotoxy(13,26);
			printf("Cantidad a Retirar : $");
			scanf("%f",&Cantidad);

			while(Cantidad > Usuario[user].saldo || Cantidad < 1)
			{
				gotoxy(27,30);
			    printf("INGRESA UNA CANTIDAD CORRECTA * * *");
		 	    gotoxy(13,48);
		 	    printf("                         ");
		 	    gotoxy(13,48);
		 	    scanf("%f",&Cantidad);
			}

			Usuario[user].saldo = Usuario[user].saldo - Cantidad;

			system("clear");
			margen_total();
			gotoxy(15,26);
			printf("OPERACION EXITOSA");
			gotoxy(25,26);
			printf("teclea 1 para CONTINUAR : ");
			scanf("%i",&x);
			system("clear");


			accion.retiros = accion.retiros + 1; // cuenta los pagos realizados por sesion
	
     		accion.retiro[Num_retiro].retiros_dinero = accion.retiro[Num_retiro].retiros_dinero + Cantidad; 
			Num_retiro = Num_retiro + 1;

		}

	}

	if (o == 2 )
	{
		if (Usuario[user].saldo > 1000000)
		{
			system("clear");
			margen_total();
			gotoxy(6,26);
			printf("*****************************");
			gotoxy(7,26);
			printf("*        BANCO UNSC         *");
			gotoxy(8,26);
			printf("*****************************");
			gotoxy(10,26);
			printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
			gotoxy(13,26);
			printf("* LO SIENTO YA NO PUEDES INGRESAR MAS DINERO * ");
			gotoxy(25,26);
			printf("teclea 1 para CONTINUAR");
			scanf("%i",&x);
		 	system("clear");
		}

		if (Usuario[user].saldo < 1000000)
		{
			system("clear");
			margen_total();
			gotoxy(6,26);
			printf("*****************************");
			gotoxy(7,26);
			printf("*        BANCO UNSC         *");
			gotoxy(8,26);
			printf("*****************************");
			gotoxy(10,26);
			printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
			gotoxy(13,26);
			printf("Cantidad a Ingresar : $");
			scanf("%f",&Cantidad);

			while(Cantidad < 1 || Cantidad > 100000)
			{
				gotoxy(27,30);
		  	 	printf("INGRESA UNA CANTIDAD CORRECTA * * *");
		   	    gotoxy(28,30);
		   		printf("(solo puedes ingresar hasta $100 mil)");
		  	 	gotoxy(13,49);
		 		printf("                         ");
		 		gotoxy(13,49);
		 		scanf("%f",&Cantidad);
			}

			Usuario[user].saldo = Usuario[user].saldo + Cantidad;

			system("clear");
			margen_total();
			gotoxy(15,26);
			printf("OPERACION EXITOSA");
			gotoxy(25,26);
			printf("teclea 1 para CONTINUAR");
			scanf("%i",&x);
			system("clear");

			accion.ingresos = accion.ingresos + 1; // cuenta los pagos realizados por sesion
	
     		accion.ingreso[Num_ingreso].ingresos_dinero = accion.ingreso[Num_ingreso].ingresos_dinero + Cantidad; 
			Num_ingreso = Num_ingreso + 1;

		}

	}


}


void Depositar_a_cuentas(int x)
{
	int Clabe;
	float Monto;
	

	if (Usuario[user].saldo < 1)
	{
		system("clear");
		margen_total();
		gotoxy(6,26);
		printf("*****************************");
		gotoxy(7,26);
		printf("*        BANCO UNSC         *");
		gotoxy(8,26);
		printf("*****************************");
		gotoxy(10,26);
		printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
		gotoxy(13,26);
		printf("* NO HAY SUFICIENTE DINERO PARA Depositar *");
		gotoxy(25,26);
		printf("teclea 1 para CONTINUAR : ");
		scanf("%i",&x);
		system("clear");

		}

		int y=0;

		
		if (Usuario[user].saldo > 1)
		{
			system("clear");
			margen_total();
			gotoxy(6,26);
			printf("*****************************");
			gotoxy(7,26);
			printf("*        BANCO UNSC         *");
			gotoxy(8,26);
			printf("*****************************");
			gotoxy(10,26);
			printf("SALDO : | $%0.2f | ",Usuario[user].saldo);
			gotoxy(14,16);
			printf("Ingresa la Clabe InterBancaria del destinatario: ");
			scanf("%d",&Clabe);
			gotoxy(16,16);
			printf("Ingresa el Monto :$");
			scanf("%f",&Monto);

			while(Monto > Usuario[user].saldo || Monto < 1)
			{
				gotoxy(27,30);
				printf("INGRESA UNA CANTIDAD CORRECTA * * *");
		 		gotoxy(16,35);
		 		printf("                            ");
		 		gotoxy(16,35);
		 		scanf("%f",&Monto);
			}



			for (int i = 0; i < 10; ++i)
		   {
				if ( Clabe ==  Usuario[i].Clabe_Inter_Bancaria )
				{
					Usuario[i].saldo = Usuario[i].saldo + Monto;
					system("clear");
					margen_total();
					gotoxy(15,26);
					printf("OPERACION EXITOSA");
					gotoxy(25,26);
					printf("teclea 1 para CONTINUAR");
					scanf("%i",&x);
					system("clear");
					y = y + 1;



	
				}
		
			}

        	if ( y==0 )
			{
				system("clear");
				margen_total();

				gotoxy(15,26);
				printf("* OPERACION FALLIDA *");
				gotoxy(16,26);
				printf("(Verifique que ingreso bien los datos) ");
				gotoxy(25,26);
				printf("teclea 1 para CONTINUAR : ");
				scanf("%i",&x);

				system("clear");
			}

			
		}	

}




void menu_secundario(int *opcion)
{
	int continuar;
	system("clear");
	margen_total();
	gotoxy(6,26);
	printf("*****************************");
	gotoxy(7,26);
	printf("*        BANCO UNSC         *");
	gotoxy(8,26);
	printf("*****************************");

	    time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);  //HORA
        gotoxy(3,6);
        printf("%s\n",output);

	gotoxy(10,26);
	printf("BIENVENIDO %s %s",Usuario[user].Datos_Complementarios.Nombre,Usuario[user].Datos_Complementarios.Apellido);
	gotoxy(14,26);
	printf("1.-Pago de Impuestos o Servicios");
	gotoxy(16,26);
	printf("2.-Retirar o Ingresar Dinero");
	gotoxy(18,26);
	printf("3.-Depositar a una Cuenta");
	gotoxy(20,26);
	printf("4.-Salir de la Cuenta");

	gotoxy(25,15);
	printf("Opcion :_____      ");
	gotoxy(25,25);
	scanf("%i",opcion);

	while(*opcion < 1 || *opcion > 4)
	{   
		gotoxy(27,30);
		printf("INGRESA UNA OPCION CORRECTA * * *");
		//gotoxy(25,26);
		//printf("                                 ");
		gotoxy(25,15);
	    printf("Opcion :______     " );
		gotoxy(25,25);
		scanf("%i",opcion);
		
	}

	system("clear");

	switch(*opcion)
	{
		case 1 : Pago_de_Servicios(continuar); break;
		case 2 : Retirar_o_Ingresar(continuar);	 break;
		case 3 : Depositar_a_cuentas(continuar); break;
		case 4 : Recibo();   break;
	}




	system("clear");  
}


void login(int *usuario)
{
	int cuenta,code,intentos=0,salir;
	system("clear");

	do{

		system("clear");

		margen_total();
		gotoxy(6,26);
		printf("*****************************");
		gotoxy(7,26);
		printf("*        BANCO UNSC         *");
		gotoxy(8,26);
		printf("*****************************");

	    gotoxy(26,26);
		printf("TIENES %i INTENTOS PARA INGRESAR",3-intentos);
	    gotoxy(14,26);
		printf("Ingresar con No. de Cuenta ");
		gotoxy(16,26);
		scanf("%i",&cuenta);
		gotoxy(18,26);
		printf("Ingresar Codigo de 4 dig");
		gotoxy(20,26);
		scanf("%i",&code);
		
		system("clear");

		for (int i = 0; i < 10; ++i)
		{
			if ( Usuario[i].Numero_de_Cuenta == cuenta && Usuario[i].codigo == code )
			{
				system("clear");
				intentos = 2;
				*usuario = i;
				limpiar_recibo();

				do
				{
					menu_secundario(&salir);
					system("clear");

				} while (salir != 4);
				
				system("clear");
			}
		
		}
	    
	    intentos = intentos + 1;

	
	} while(intentos !=3);


    system("clear");	      
}


void menu_primario (int *opc) 
{
	system("clear");


	margen_total();
	gotoxy(6,26);
	printf("*****************************");
	gotoxy(7,26);
	printf("*        BANCO UNSC         *");
	gotoxy(8,26);
	printf("*****************************");


	    time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);  //HORA
        gotoxy(25,50);
        printf("%s\n",output);

	gotoxy(14,26);
	printf("1.- Ingresar");
	gotoxy(16,26);
	printf("2.- Salir");
	//gotoxy(18,26);

	gotoxy(20,15);
	printf("Opcion :_____      ");
	gotoxy(20,25);
	scanf("%i",opc);

	while(*opc < 1 || *opc > 2)
	{
		gotoxy(22,30);
		printf("INGRESA UNA OPCION CORRECTA");
		//gotoxy(18,26);
		//printf("                           ");
		gotoxy(20,15);
		printf("Opcion :_____      ");
		gotoxy(20,25);
		scanf("%i",opc);
		
	}

	switch (*opc) 
	{
		case 1 : login(&user);   break;
	}



	system("clear");
}



void main () 
{
	int opcion;
	system("clear");
    
    inicializar_datos();
	caratula();
	do
	{
		menu_primario(&opcion);

	} while (opcion != 2);

	gotoxy(28,20);
	printf("PROGRAMA TERMINADO\n\n\n");

}