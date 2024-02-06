#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*          programa de Edgar Alan             */
int main () {
	
int enlaces;

	
	printf(" Cuantos enlaces presenta en Carbono - Carbono   ");
	scanf("%d",&enlaces);
	
	
	if (enlaces==1)
	printf("ALCANOS ");
	
	if ( enlaces==2)
	printf("ALQUENOS ");
	
	
	if ( enlaces==3)
	printf("ALQUINOS ");
	
	if (enlaces >=4 || enlaces<=0)
	printf("otro compuesto que no es de los establecidos");
}
