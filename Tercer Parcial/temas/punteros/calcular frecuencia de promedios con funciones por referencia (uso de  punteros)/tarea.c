#include <stdio.h>
#include <gotoxy.h>


void margen () 

{
	char caracter = 'W';

	gotoxy(3,25);
	//printf("\n\n");
	printf("           * BIENVENIDO *                     ");
	gotoxy(4,0);
	//printf(" ingresa el CARACTER que quieres usar para el margen : ");
	//scanf("%c",&caracter);

	for (int i = 15; i < 71; ++i)    /*CADA FOR REPRESENTA EL MARGEN DE CADA LADO Y SUS CORDENADA */
	
	{
		gotoxy(10,i);
		printf("%c", caracter);
		
  
	}

	for (int i = 11; i < 21 ; ++i)
	{
		gotoxy(i,70);
		printf("%c", caracter);
	}

	for (int i = 70; i > 14; --i)
	{
		gotoxy(20,i);
		printf("%c", caracter);
	}

	for (int i = 20; i > 9; --i)

	{
		gotoxy(i,15);
		printf("%c", caracter);
		
	}



	
}


void caratula() 

{
	
    margen();   /*LLAMAMOS A LA FUNCION MARGEN */

	gotoxy(12,30);
	printf("INSTITUO POLITECNICO NACIONAL");
	gotoxy(14,35);
	printf("ESIME CULHUACAN");
	gotoxy(16,27);
	printf("Fundamentos de Programacion en C ");
	gotoxy(18,32);
	printf("Edgar Alan Suarez Vega ");



	gotoxy(23,35);
	printf("* tarea  * \n");

	

}


void Lectura (int *cal, int O) 

{
    for (int i = 0 ; i < O ; i ++) {
       
        printf("ingresa la calificacion 0-5 del alumno %i: " , i+1 );
        scanf("%i",&cal[i]);
    }
    
}


void Frecuencia (int Vec[] , int  X , int W[] ) 

{
    
    for (int i = 0 ; i < X ; i ++) {
        
        if ( Vec[i] == 1) {
            
            W[0] ++;
        }
        
        if ( Vec[i] == 2) {
            
            W[1] ++;
        }
        
        if ( Vec[i] == 3) {
            
            W[2] ++;
        }
        
        if ( Vec[i] == 4) {
            
            W[3] ++;
        }
        
        if ( Vec[i] == 5) {
            
            W[4] ++;
        }
        
    }   
   
}

void Impresion (int *R , int Z , int *f) 

{
    for (int i = 0 ; i < Z ; i ++) {
        
        printf("\n calificacion del alumno %i : %i " ,i+1 , R[i]);
        
    }   
    
    printf("\n");
    
    for (int i = 0 ; i < 5 ; i ++) {
        
        printf(" \n la calificacion de %i se repitio %i veces ", i+1 , f[i]);
        
    }   
    
    
}


void main ()

{
    int   N=10 , calificaciones[N], F[5]={0,0,0,0,0} ; // 1 2 3 4 5 || 0 1 2 3 4

    caratula();
    printf("\n\n\n\n");

    Lectura (calificaciones,N);
    Frecuencia (calificaciones,N,F);
    Impresion (calificaciones,N,F);
    
    printf("\n\n\n\n");
    
}

