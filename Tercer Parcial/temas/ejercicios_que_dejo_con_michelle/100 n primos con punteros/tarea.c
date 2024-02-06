#include <stdio.h>



void lectura (int *V, int O) 

{
	for (int i = 1; i < O; ++i)
	{
		if( (i % 2) == 1) {

			V[i]=i;
		}
	}

}


void imprimir (int *V,int O) 

{
	for (int i = 1; i < O; ++i)
	
	{
		if( (i % 2) == 1) {

			printf("%i \n",V[i] );
		}
		
	}

}



void main()
{
	int N=100, vector[N];

	//printf("hello world\n");
	
	lectura(vector,N);
	//printf("%i\n\n\n",vector[5]);
	imprimir(vector,N);

	printf("\n\n");
	
}