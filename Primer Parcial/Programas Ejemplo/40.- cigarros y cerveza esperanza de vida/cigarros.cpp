#include<stdio.h>
#include<stdlib.h>
main()
{
	int opc;
	int cig;
	float total,totald,totala;
	printf("1.- Calcular tiempo de vida perdido por fumador \n");	
	printf("2.- Calcular tiempo de vida perdido por borracho \n");	
	printf("Ingrese la opcion: ");
	scanf("%i",&opc);
	if(opc==1)
	{
		
		printf("\n \nIngrese el total de cigarros consumidos: ");
		scanf("%i",&cig);
		total=11*cig;
		printf("El total de minutos de vida perdidos es %f \n",total);
		totald=total*0.00069444;
		printf("El total de dias de vida perdidos es %f \n",totald);
		totala=totald*0.00273973;
		printf("El total de anios de vida perdidos es %f \n",totala);

		
		
	}
		else if(opc==2)
		{
			printf("\n \nIngrese el total de cervezas consumidas: ");
			scanf("%i",&cig);
			total=15*cig;
			printf("El total de minutos de vida perdidos es %f \n",total);
			totald=total*0.00069444;
			printf("El total de dias de vida perdidos es %f \n",totald);
			totala=totald*0.00273973;
			printf("El total de anios de vida perdidos es %f \n",totala);
		}
			else if(opc>=3)
			{
				printf("Opcion Incorrecta");
			}
}
