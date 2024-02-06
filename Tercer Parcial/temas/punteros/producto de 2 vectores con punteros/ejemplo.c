#include <stdio.h>


const int MAX=2;    // declaramos una constante , que nos ayuda para hacer este programa de esta forma

void Lectura (int VEC[],int T);    // Declaramos las funciones que vamos ocupar despues del main para que las lea
void Imprime (int VEC[],int T);
void Producto (int *X, int *Y, int *Z , int T);





void main()

{
    int VEC1[MAX], VEC2[MAX] , VEC3[MAX];   // declaramos variables que vamos ocupar
    
    Lectura(VEC1,MAX);                     // llamamos a las funciones y les mandamos esos datos para que trabajen
    Lectura(VEC2,MAX);
    Producto(VEC1,VEC2,VEC3,MAX);
    Imprime(VEC3,MAX);
    
    
}


 void Lectura (int VEC[],int T) {         // la funcion resive lo que le mandamos y lo transforma a como lo desea 
    
    
    for(int I = 0 ; I < T; I++ ) {
        
        printf("ingresa el valor en la posicion %i : " ,I+1);
        scanf("%i", &VEC[I] );
    }
    
    
    
    
}

void Producto ( int *X, int *Y, int *Z , int T ) {  // la funcion resive los valores y los transforma 
    
    printf("\n");
    
    for(int I = 0 ; I < T ; I++) {
        
        Z[I] = X[I]*Y[I];
    }
    
    
    
}


void  Imprime ( int VEC[], int T ) {
    
    
    for(int I=0 ; I< T ; I++) {
        
        printf("\n el resultdado es : %i " , VEC[I]);
        
        
        
    }
}

