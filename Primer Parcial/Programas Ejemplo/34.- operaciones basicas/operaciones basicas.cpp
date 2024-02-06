#include <stdio.h>
#include <math.h>
#include <stdlib.h>

                                                                    /*           programa de Edgar Alan             */
int main () {
	

int opcion;
int a,b;
    	 printf("introduce un numero : ");
    	 scanf("%d",&a);
          printf("introduce otro numero :");
    	 scanf("%d",&b);

	printf("\n*****************************");
	printf("\n que operacion deseas hacer *");
	printf("\n                            *");
	printf("\n    1.-  SUMA               *");
	printf("\n    2.-  RESTA              *");
	printf("\n    3.-  MULTIPLICACION     *");
	printf("\n    4.-  DIVICION           *"); 
	printf("\n*****************************");
	printf("\n opcion:   ");
    scanf("%d",&opcion);
    
    if(opcion==1){
    	 int operacion;
    	 operacion=a+b;
    	 printf("resultado es %d ",operacion );
	}

 if(opcion==2){
    	 int operacion;
    	 operacion=a-b;
    	 printf("resultado es %d ",operacion );
	}



 if(opcion==3){
    	 int operacion;
    	 operacion=a*b;
    	 printf("resultado es %d ",operacion );
	}

 if(opcion==4){
    	 int operacion;
    	 operacion=a/b;
    	 printf("resultado es %d ",operacion );
	}


if (opcion<=0 || opcion>=5 )
printf("opcion invalida");

}
