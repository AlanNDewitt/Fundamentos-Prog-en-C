#include<stdio.h>
#include<stdlib.h>
#include <unistd.h> 
#include<math.h>
#include<time.h>
int seg1,seg2,seg3,seg4;
int aleatorio_en_rango(int minimo, int maximo);
int aleatorio_en_rango(int minimo, int maximo){
   return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
main()
{
	int opc;
	printf("1.- Clase A\n");
	printf("2.- Clase B\n");
	printf("3.- Clase C\n");
	printf("4.- Clase D\n");
	printf("5.- Clase E\n");
	
	printf("Ingrese que clase de dirección IP quiere crear: ");
	scanf("%i",&opc);
	
	if(opc==1)
	{
		
		srand(time(NULL));
		seg1=rand()%126+1;
		seg2=rand()%255+1;
		seg3=rand()%255+1;
		seg4=rand()%255+1;
		printf("La direccion IP es %i.%i.%i.%i", seg1,seg2,seg3,seg4);
	}
		else if(opc==2)
		{
			srand(getpid());
			seg1=aleatorio_en_rango(128,191);
			seg2=rand()%255+1;
			seg3=rand()%255+1;
			seg4=rand()%255+1;
			printf("La direccion IP es %i.%i.%i.%i", seg1,seg2,seg3,seg4);
		}
			else if(opc==3)
			{
				srand(getpid());
				seg1=aleatorio_en_rango(192,223);
				seg2=rand()%255+1;
				seg3=rand()%255+1;
				seg4=rand()%255+1;
				printf("La direccion IP es %i.%i.%i.%i", seg1,seg2,seg3,seg4);

			}
				else if(opc==4)
				{
					srand(getpid());
					seg1=aleatorio_en_rango(224,239);
					seg2=rand()%255+1;
					seg3=rand()%255+1;
					seg4=rand()%255+1;
					printf("La direccion IP es %i.%i.%i.%i", seg1,seg2,seg3,seg4);

				}	
					else if(opc==5)
					{
						srand(getpid());
						seg1=aleatorio_en_rango(240,255);
						seg2=rand()%255+1;
						seg3=rand()%255+1;
						seg4=rand()%255+1;
						printf("La direccion IP es %i.%i.%i.%i", seg1,seg2,seg3,seg4);

					}
						else if(opc>=6)
						{
							printf("Opcion Incorrecta");
						}
}

