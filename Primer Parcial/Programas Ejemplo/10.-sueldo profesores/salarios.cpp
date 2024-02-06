#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan               */
int main () {

int sueldo;
printf("Ingresa el sueldo ");
scanf("%d",&sueldo);

if (sueldo<18000) {
	
	printf("\n *incremento del 12 porciento *");
	int porcentaje,salario;
	porcentaje = sueldo*0.12;
	salario = sueldo+porcentaje;
	printf("\n EL salario es:   %d ",salario);
	
}


if (18000<=sueldo && sueldo <=30000) {
	
	printf("\n *incremento del 8 porciento *");
	int porcentaje,salario;
	porcentaje = sueldo*0.08;
	salario = sueldo+porcentaje;
	printf("\n EL salario es:   %d ",salario);
	
}

if (30000<sueldo && sueldo <=50000) {
	
	printf("\n *incremento del 7 porciento *");
	int porcentaje,salario;
	porcentaje = sueldo*0.07;
	salario = sueldo+porcentaje;
	printf("\n EL salario es:   %d ",salario);
	
}


if (50000<sueldo) {
	
	printf("\n *incremento del 6 porciento *");
	int porcentaje,salario;
	porcentaje = sueldo*0.06;
	salario = sueldo+porcentaje;
	printf("\n EL salario es:   %d ",salario);
	
}





}
