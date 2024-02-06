#include <stdio.h>
int opcion;
int numeros;

float A[100];
float B[100];

float resultado;



caratula () 

{
    printf("* INSTITUTO POLITECNICO NACIONAL * \n ");
    printf (" * ESIME CULHUACAN* \n ");
    printf (" Suarez Vega Edgar Alan \n ");
    printf ("  1CV25 \n");
    
    
    
    
}



float lectura () 

{
    


    printf("cuantos numeros son ");
    scanf("%d", & numeros);
    
    
    
    for (int i = 0 ; i < numeros ; i++) 
    
    {
         printf("ingresa tu numero %d ",i+1);
         scanf("%f",&A[i]);
        
    }
    
    
    return A[100];
    
}

float suma ()

{
    for (int j = 0 ; j < numeros ; j++) 
    
    {
         
         B[j] = A[j] * A[j] ;
        
    }
    
    
    
    
    
    return B[100];
    
}



float imprimir (  ) {
    
}




int main()

{  
    do {
        
    
    caratula();
    
    lectura();
    
    suma ();
    
    printf("desea repetir el programa ?\n");
    printf(" SI = 1   NO = 0 \n");
    scanf("%d",&opcion);
        
    } while (opcion == 1);
    
    
}


    
    
    
    
    



