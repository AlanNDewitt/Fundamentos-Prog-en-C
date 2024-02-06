#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int A,B,C,D,E,F;
    int random1,random2,random3,random4,random5,random6;
    
    
    printf(" ME LATE ");
    printf(" \n ingresa tu PRIMER numero:  ");
    scanf("%d",&A);
    if (A>56 || A<1){
        printf(" ERROR ");
        printf(" \ningresa un numero menor O mayor a 56 para tu PRIMER numero Me LATE     ");
        scanf("%d",&A);
    }
    
    printf(" ***************************  ");
    printf(" \n ingresa tu SEGUNDO numero: ");
    scanf("%d",&B);
    if (B>56 || B<1 || B==A    ){
        printf(" ERROR ");
        printf(" \ningresa un numero VALIDO , menor a 56 para tu SEGUNDO numero Me LATE     ");
        scanf("%d",&B);
    }
    if (B==A  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU PRIMER numero Me LATE     ");
        scanf("%d",&B);
    }
    
    
    printf(" *************************** ");
    printf(" \n ingresa tu TERCER numero:  ");
    scanf("%d",&C);
    if(C>56 || C<1 || C==A || C==B ){
        printf(" ERROR ");
        printf(" \ningresa un numero VALIDO, menor a 56 para tu TERCER numero Me LATE     ");
        scanf("%d",&C);
    }
    if (C==A  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU PRIMER numero Me LATE    ");
        scanf("%d",&C);
    }
    if (C==B  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU SEGUNDO numero Me LATE    ");
        scanf("%d",&C);
    }
    
    
    printf(" *************************** ");
    printf(" \n ingresa tu CUARTO numero:  ");
    scanf("%d",&D);
    if(D>56 || D<1 || D==A || D==B || D==C){
        printf(" ERROR ");
        printf(" \ningresa un numero VALIDO ,  menor a 56 para tu CUARTO numero Me LATE     ");
        scanf("%d",&D);
    }
    
    if (D==A  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU PRIMER numero Me LATE    ");
        scanf("%d",&D);
    }
    if (D==B  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU SEGUNDO numero Me LATE    ");
        scanf("%d",&D);
    }
    if (D==C  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU TERCER numero Me LATE    ");
        scanf("%d",&D);
    }
    
    

    printf(" *************************** ");
    printf(" \n ingresa tu QUINTO numero:  ");
    scanf("%d",&E);
    if(E>56 || E<1 || E==A || E==B || E==C || E==D ){
        printf(" ERROR ");
        printf(" \ningresa un numero VALIDO, menor a 56 para tu QUINTO numero Me LATE     ");
        scanf("%d",&E);
    }
    
    if (E==A  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU PRIMER numero Me LATE    ");
        scanf("%d",&E);
    }
    if (E==B  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU SEGUNDO numero Me LATE    ");
        scanf("%d",&E);
    }
    if (E==C  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU TERCER numero Me LATE    ");
        scanf("%d",&E);
    }
    if (E==D  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU CUARTO numero Me LATE    ");
        scanf("%d",&E);
    }
    
    
     printf(" *************************** ");
    printf(" \n ingresa tu ULTIMO numero:  ");
    scanf("%d",&F);
    if(F>56 || F<1 || F==A || F==B || F==C || F==D || F==E ){
        printf(" ERROR ");
        printf(" \ningresa un numero VALIDO, menor a 56 para tu ULTIMO numero Me LATE     ");
        scanf("%d",&F);
    }
    if (F==A  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU PRIMER numero Me LATE    ");
        scanf("%d",&E);
    }
    if (F==B  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU SEGUNDO numero Me LATE    ");
        scanf("%d",&E);
    }
    if (F==C  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU TERCER numero Me LATE    ");
        scanf("%d",&E);
    }
    if (F==D  ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU CUARTO numero Me LATE    ");
        scanf("%d",&E);
    }
     if (F==E ){
        printf(" ERROR ");
        printf(" \ningresa un numero DIFERENTE a TU QUINTO numero Me LATE    ");
        scanf("%d",&E);
    }
    
    
    
    
    srand(time(NULL));
    random1=rand()%56;
    Sleep(500);
    random2=rand()%56;
    Sleep(500);
    random3=rand()%56;
    Sleep(500);
    random4=rand()%56;
    Sleep(500);
    random5=rand()%56;
    Sleep(500);
    random6=rand()%56;
    
    if( random1 == A) {
        printf("tienes una concidencia en tu PRIMER numero ");
    }
    if (random2 == B){
        printf("tienes una concidencia en tu SEGUNDO numero");
    }
    if (random3 == C) {
        printf("tiens una concidencia en tu TERCER numero");
    }
    if (random4 == D) {
        printf("tienes una concidencia en tu CUARTO numero");
    }
    if (random5 == E) {
        printf("tiens una concidencia en tu QUINTO numero");
    }
    if (random6 == F) {
        printf(" tienes una concidencia en tu ULTIMO numero");
    }
    
    
    
    printf("los numero de el melate son: %d,%d,%d,%d,%d,%d",random1,random2,random3,random4,random5,random6);
    printf(" \n alparecer no ganaste ");














    return 0;
}

