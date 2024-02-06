#include <stdio.h>



int f1 (int *R);

 
void main()

{
    int I, K=4;
    
    for (I=1;I<=3;I++) {
        
       printf("\n\n valor de K antes de la funcion %d " , K++);
       
       printf("\n valor de K despues de la funcion %d", f1 (&K) );
       
    }
    
   
    
    
}


int f1 (int *R) {
    
    *R += *R ;
    
    
}
