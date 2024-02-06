#include <stdio.h>
#include <math.h>

void lectura(float *V)
{
	printf("\nIngresa el componente i :");
	scanf("%f",&V[0]);
	printf("\nIngresa el componente j :");
	scanf("%f",&V[1]);
	printf("\nIngresa el componente k :");
	scanf("%f",&V[2]);
}

void magnitud(float *V, float *m)
{
	*m = sqrt( pow(V[0],2) + pow(V[1],2) + pow(V[2],2) ) ;

}

void imprimir(float resultado)
{
	printf("\nla magnitud de tu vector es : %f \n",resultado );
}

void main() 
{
	int N=3;
	float vector[N],M;

	lectura(vector);
	magnitud(vector,&M);
	imprimir(M);
	//printf("hello world\n");

	printf("\n\n\n\n");
}