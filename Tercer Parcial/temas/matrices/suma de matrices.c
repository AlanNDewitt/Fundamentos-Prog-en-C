#include <stdio.h>

int main()

{
    int Matriz[2][2];
    
    for (int i=0 ; i<2 ; i++) // FILAS
    
    {
        for(int j=0 ; j<2 ; j++) // COLUMNAS 
        
        {
            printf("Ingresa el valor para la posicion [%i][%i]  ",i,j);
            scanf("%d",&Matriz[i][j] );
            
            
        }
        
        
        
    }
    
    printf("\n\n\n");
    
    int Matriz2[2][2];
    
    for (int i=0 ; i<2 ; i++) // FILAS
    
    {
        for(int j=0 ; j<2 ; j++) // COLUMNAS 
        
        {
            printf("Ingresa el valor para la posicion [%i][%i]  ",i,j);
            scanf("%d",&Matriz2[i][j] );
            
            
        }
        
        
        
    }
    
    
    
    
    
    for (int i=0 ; i<2 ; i++) // FILAS
    
    {
        for(int j=0 ; j<2 ; j++) // COLUMNAS 
        
        {
            printf(" \n La suma es :  %i " , Matriz[i][j] + Matriz2[i][j] );
            
            
            
        }
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

