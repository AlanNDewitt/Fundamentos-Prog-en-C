#include <stdio.h>


int tam = 4; 

int A [100][100] ; // declare asi las variables para usar Funcion con paso y sin regreso




datos ( int o) {
    
    for (int i=0 ; i<o ; i++) // FILAS
    
    {
        
        for(int j=0 ; j<o ; j++) // COLUMNAS 
        
        {
            printf("Ingresa el valor para la posicion [%i][%i]",i,j);
            scanf("%d",&A[i][j] );
            
            
            
        }
        
        
        
    }
    
    
}



imprimir (int u) {
    
    for (int i = 0; i < u; ++i)
	{
		for (int j = 0; j < u; ++j)
		{
			
			if (i==j ) {
			    printf(" %i  " , A [i][j] );
			    
			}
			
			else {
			        
			        printf(" - ");
			    }
		   
		}
		
		printf("\n");

	}
    
    
    
    
    
    
}



int main()

{
   
    
    datos(tam);
    
    imprimir(tam);

    
}


