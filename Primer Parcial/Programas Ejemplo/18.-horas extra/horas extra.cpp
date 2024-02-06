#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan             */
int main () {
	
	int categoria;
	printf("\n*************************************");
	printf("\n*  Que categoria de trabajador eres *");
	printf("\n*                                   *");
	printf("\n*************************************");
	printf("\n categoria:  ");
	scanf("%d",&categoria);
	
	
	if (categoria==1) {
		
		int horas,sueldo;
		printf("cuantas horas extra trabajaste  ");
		scanf("%d",&horas);
		if (horas > 40) {
			sueldo=22*40;
			printf("solo te podemos pagar 22 horas ");
			printf("tu pago por horas extra es : %d ",sueldo);
		}
		else {
			sueldo=40*horas;
			printf("tu pago por horas extra es : %d ",sueldo);
		}
		
		
	}
	
	
	
	if (categoria==2) {
		
		int horas,sueldo;
		printf("cuantas horas extra trabajaste  ");
		scanf("%d",&horas);
		if (horas > 40) {
			sueldo=22*50;
			printf("solo te podemos pagar 22 horas ");
			printf("tu pago por horas extra es : %d ",sueldo);
		}
		else {
			sueldo=50*horas;
			printf("tu pago por horas extra es : %d ",sueldo);
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

     
     
    if (categoria==3) {
		
		int horas,sueldo;
		printf("cuantas horas extra trabajaste  ");
		scanf("%d",&horas);
		if (horas > 40) {
			sueldo=22*85;
			printf("solo te podemos pagar 22 horas ");
			printf("tu pago por horas extra es : %d ",sueldo);
		}
		else {
			sueldo=85*horas;
			printf("tu pago por horas extra es : %d ",sueldo);
		}













}



if(categoria>=4)
printf("NO ERES APTO PARA HORAS EXTRA");






}
