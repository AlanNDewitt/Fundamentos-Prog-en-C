#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan               */
int main () {

int edad;
printf("\n ***** Hola bienvenido al SPA *****");
printf("\n        que edad tienes: ");
scanf("%d",&edad);


if(edad<=25)
{
	int tratamiento,dias,precio,op1,op2;
	printf("\n ----* ENHORABUENA tienes un 11 porciento de descuento en el total de tus gastos aqui *----");
	printf("\n");
	printf("\n     que tratamiento deseas escoger, tenemos los siguientes: ");
    printf("\n     tratamientos x dia:        ");
    printf("\n****************");
	printf("\n*   1.- 2827   *");
	printf("\n*   2.- 1910   *");
	printf("\n*   3.- 2630   *");
	printf("\n*   4.- 1175   *");
	printf("\n****************");
	printf("\n  :    ");
	scanf("%d",&tratamiento);
	
	if (tratamiento==1){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		op1=dias*2827;
		op2=op1*0.11;
		precio=op1-op2;
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==2){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		op1=dias*1910;
		op2=op1*0.11;
		precio=op1-op2;
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==3){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		op1=dias*2630;
		op2=op1*0.11;
		precio=op1-op2;
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==4){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		op1=dias*1175;
		op2=op1*0.11;
		precio=op1-op2;
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}






/********        if 2 ***********/


if(edad>=60)
{
	int tratamiento;
	printf("\n ----* ENHORABUENA tienes un 21 porciento de descuento en el total de tus gastos aqui *----");
	printf("\n");
	printf("\n     que tratamiento deseas escoger, tenemos los siguientes: ");
    printf("\n     tratamientos x dia:        ");
    printf("\n****************");
	printf("\n*   1.- 2827   *");
	printf("\n*   2.- 1910   *");
	printf("\n*   3.- 2630   *");
	printf("\n*   4.- 1175   *");
	printf("\n****************");
	printf("\n  :    ");
	scanf("%d",&tratamiento);
	
	if (tratamiento==1){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		op1=dias*2827;
		op2=op1*0.21;
		precio=op1-op2;
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==2){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		op1=dias*1910;
		op2=op1*0.21;
		precio=op1-op2;
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==3){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		op1=dias*2630;
		op2=op1*0.21;
		precio=op1-op2;
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==4){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		op1=dias*1175;
		op2=op1*0.21;
		precio=op1-op2;
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}

}


/*******   if 3 *************/


if(edad>25 && edad < 60) {

	int tratamiento;
	printf("\n ----* Hola de NUEVO *----");
	printf("\n");
	printf("\n     que tratamiento deseas escoger, tenemos los siguientes: ");
    printf("\n     tratamientos x dia:        ");
    printf("\n****************");
	printf("\n*   1.- 2827   *");
	printf("\n*   2.- 1910   *");
	printf("\n*   3.- 2630   *");
	printf("\n*   4.- 1175   *");
	printf("\n****************");
	printf("\n  :    ");
	scanf("%d",&tratamiento);
	
	if (tratamiento==1){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		precio=dias*2827;

		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==2){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		precio=dias*1910;
		
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==3){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		precio=dias*2630;
		
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
	
	if (tratamiento==4){
		int dias,op1,op2,precio;
		printf("\n      por cuantos dias? ");
		scanf("%d",&dias);
		precio=dias*1175;
		
		printf("\n tu precio a pagar por %d dias es:  %d     " , dias,precio);
		
	}
}

}
