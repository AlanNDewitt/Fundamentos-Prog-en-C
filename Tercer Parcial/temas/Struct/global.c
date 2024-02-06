struct datos  // es necesario poner nombre si vamos a declarar sus variables despues del struct //
   {
         int edad;
         char nombre[10];
    
    
    
    
     }alumno,profesor;
     
     




void main()
{
    //struct datos alumno,profesor  declarar las variables del  struct si es de forma global //
    
     

    
    printf("\ningresa edad para alumno : ");
    scanf("%i",&alumno.edad);
    
    printf("\n ingresa el nombre del alumno : ");
    scanf("%s",&alumno.nombre);
    
    
    
    printf("\ningresa la edad del profesor: ");
    scanf("%i",&profesor.edad);
    
    printf("\n ingresa el nombre del profesor : ");
    scanf("%s",&profesor.nombre);
    
    printf("\n\n\n\n");
    
    printf("\nel alumno es: %s ",alumno.nombre);
    printf("\nel profesor es : %s",profesor.nombre);
    
    printf("\nla edad del alumno es : %i", alumno.edad);
    printf("\n la edad del profesor es :  %i ", profesor.edad);
    
    

   
}

