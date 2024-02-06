#include <stdio.h>
#include <string.h>
#include <conio.h>


int main()
{
    
    char cad[20],car;
    int i =0 ;
    
    printf("\n ingresa una cadena de caracteres (nomas de 18) :");
    
    
        do // esta sentencia funciona como el fgets es su forma manual
        {
            
            
            scanf("%c",&car);
            if (car!='\n');
                 
                 {
                     cad[i]=car;
                     i++;
                 }
            
            
            
            
            
            
        } while (car!='\n');
        
        cad[i]='\0';
        
        printf("\n la cadena capturada es : %s ",cad );
        
        
        getch();
        
        
        printf("\n la cadena captura  es : %s " , cad);
        printf("\n ASCCI correspondientes");
        
        for (int j=0;j<i;j++) 
        {
        
        printf("\t %d" ,cad[j] );
        
        }
        
        
        printf("\n La longitud de la cadena , contada con i es : %d ", i);
        printf("\n la longitud de la cadena metida con strlen es : %d ", strlen(cad));
        printf("\n la longitud del arreglo cad es : %d " , sizeof(cad));
        printf("\n La direccion donde se encuenta la cadena capturada es : %d " ,&cad);
        
        printf("\n\n");
        
        
        
        
        
        
        
    
    
}

