#include <stdio.h>

int n;


int cuadrado () {
    
    for(int renglon=1;renglon<=n;renglon++)
    
	{
       
        for (int asteriscos=1 ; asteriscos<=n ; asteriscos++)
        {
           printf("*");
        }
           
     printf("\n");
    
    
    
    }





}



int triangulo()
{
	
	int asteriscos=1, espacio=n-1;

	  	for(int renglon=1; renglon<=n ; renglon++) 
	  	
		{
		  for(int i=1; i<=espacio ; i++) 
		  
			printf(" ");

		  for(int i=1; i<=asteriscos ; i++)
        	printf("*");
			printf("\n");
			asteriscos= asteriscos+2; 
			espacio= espacio-1; 
		    
		}

}











     int trianguloder()
     {
         
         int asteriscos=1, espacio=n-1; 
	  	
	  	for(int renglon=1; renglon<=n ; renglon++) 
	  	{
	  	    
		  for(int i=1; i<=espacio ; i++)  
			printf(" ");
		  
		  for(int i=1; i<=asteriscos ; i++) 
			printf("*");
			printf("\n");
			asteriscos= asteriscos+1; 
			espacio= espacio-1;
			
			
			
		}

      
         
         
     }












int trianguloinv()
{
	
	


	int asteriscos=n, espacio=n-1;

	  	for(int renglon=1; renglon<=n ; renglon++) 
	  	
		{

		  
		     
		     for(int i=1; i<=asteriscos ; i++)
		     {
        	 printf("*");
		     }
			  
			asteriscos=asteriscos-1;
	        espacio=espacio+1;
	         printf("\n");
	         
			
		    
		    
		}
		
		
		

}










int marco(){
    
   for(int renglon=1; renglon<=n ; renglon++) 
	  	{
	  		for(int col=1; col<=n; col++) 
	  		{
	  			
				if(renglon == 1 || renglon == n || col== 1 || col==n) 
	  			{
					printf("*");  
				}
	  			
	  			else 
	  			{
	  				printf(" ");
				}
			}
			printf("\n");
	  }
    
    
    
}




int main() {


	printf("Ingresa el tamanio : ");
	printf("\n");
	scanf("%d",&n);
    
    int opcion;
    printf("\n        Figura          ");
    printf("\n**************************");
	printf("\n*  1.- Cuadrado          *");
	printf("\n*  2.- triangulo         *");
	printf("\n*  3.- Triangulo derecha *");
	printf("\n*  4.- Triangulo invetido*");
	printf("\n*  5.- Marco             *");
	printf("\n*                        *");
	printf("\n**************************");
	printf("\n  :    ");
	scanf("%d",&opcion);
    
    switch (opcion){
	
	case 1 : 
	         printf("\n resultado es : \n", cuadrado());
	                                        
											 break;
	                                         
	case 2 : 
	         printf("\n resultado es : \n", triangulo());
	                                         
	                                         break;
	
	case 3 : 
	         printf("\n resultado es : \n", trianguloder());
	                                         
	                                         break;                                         
	case 4 : 
	         printf("\n resultado es : \n", trianguloinv());
	                                         
	                                         break;     
	case 5 : 
	         printf("\n resultado es : \n", marco());
	                                         
	                                         break;   
    
	                                         
                                     
	                                         
	
	}
    
    
    
    
    
    
    
    
    
    
}

	
	


