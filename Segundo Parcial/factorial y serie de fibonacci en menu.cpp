#include <stdio.h>
#include <stdlib.h>
int main()
{
   int Resul;
    int F;
    int opcion;
    int x=0,y=1,z=0,c,cuenta=2;
    int b;
    
    
    
    do{
      printf("\n     Operaciones        ");
    printf("\n************************");
	printf("\n*  1.- FACTORIAL       *");
	printf("\n*  2.- Fibonacci serie *");
	printf("\n*  3.- SALIR           *");
	printf("\n*                      *");
	printf("\n************************");
	printf("\n  :    ");
	scanf("%d",&opcion);
	   
	   
	   
	switch (opcion) { 
	    
	    
	      
	case 1:
             
              printf("ingresa un numero para calcular su factorial : ");
              scanf("%d", &F);
              Resul = 1;
              printf("RESULTADO :   \n");
                while(F > 1)
                   {
                    Resul = Resul * F;
                    printf(" %d x",F);
                     F--;
                            }

                printf(" 1 = %d \n ",Resul);
                printf("\n ");
                
                                                         break;
     
    case 2 :       
     
						printf("ingresa el numero: ");
						scanf("%d",&c);
						printf("%d , %d , ",x,y);
	
						while (cuenta<c) {
											z=y;
											y=y+x;
											printf("%d  ,",y);
		
											x=z;
											cuenta ++;
										}
                                                             break;
	    
	    
	case 3 : 
					printf("...");
	 
	    										break;
	    
	             
	             
default :   printf("error"); 
    }
	 
	 
	 
	 


    printf("\n volver al menu?");
    printf(" \n 1.-SI , 2.- NO ");
    printf(" \n opcion : ");
    scanf("%d", &b);
    
    } 
	
	while ( b !=2 );
    printf("\n");
  printf("PROGRAMA TERMINADOOOOOOOOOO");

}
