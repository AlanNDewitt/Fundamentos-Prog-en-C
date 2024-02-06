#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,opcion;
    printf("\n  ingresa un numero ");
    scanf("%d",&a);
    printf("\n  ingresa otro numero ");
    scanf("%d",&b);
   
   
    printf("\n     Operaciones        ");
    printf("\n************************");
	printf("\n*   1.- suma           *");
	printf("\n*   2.- resta          *");
	printf("\n*   3.- multiplicacion *");
	printf("\n*   4.- divicion       *");
	printf("\n*   5.- modulo         *");
	printf("\n*                      *");
	printf("\n************************");
	printf("\n  :    ");
	scanf("%d",&opcion);
	
	switch (opcion){
	
	case 1 : c=a+b;
	         printf("\n resultado es : %d ",c);
	                                        
											 break;
	                                         
	case 2 : c=a-b;
	         printf("\n resultado es : %d ",c);
	                                         
	                                         break;
	                                         
    case 3 : c=a*b;
	         printf("\n resultado es : %d ",c);
	                                         
	                                         break;
	                                         
    case 4 : c=a/b;
	         printf("\n resultado es : %d ",c);
	                                         
	                                         break;
	                                         
	case 5 : c=a%b;
	         printf("\n resultado es : %d ",c);
	                                         
	                                         break;                                         
	                                         
	
	}
   
    

}

