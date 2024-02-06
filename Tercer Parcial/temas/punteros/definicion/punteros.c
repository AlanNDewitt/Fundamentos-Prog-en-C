#include <stdio.h>






int main()

{
    int X =3 , Y = 7 , Z[5]={2,4,6,8,10} ;
    
    int *IX; //declaramos el puntero 
    
    
    printf("X = %d \n",X); 
    printf("Y = %d \n",Y);
    printf("Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \t Z[5] = %d \n \n",Z[0],Z[1],Z[2],Z[3],Z[4] );
    
    IX = &X;  
    Y = *IX;  
    *IX = 1;   
    
    printf("X = %d \n",X); 
    printf("Y = %d \n",Y);
    printf("Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \t Z[5] = %d \n \n",Z[0],Z[1],Z[2],Z[3],Z[4] );
    
   
   
    printf("-------------------\n\n\n");
    
    
    
    IX = Z[2];
    Y = *IX;
    *IX = 15;
    
    printf("X = %d \n",X); 
    printf("Y = %d \n",Y);
    printf("Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \t Z[5] = %d \n \n ",Z[1],Z[2],Z[3],Z[4],Z[5] );
    
    
    
    
    
    

    return 0;
}

