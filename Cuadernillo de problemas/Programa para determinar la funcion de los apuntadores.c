
#include <stdio.h>
#include <stdlib.h>

//Programa para determinar la funcion de los apuntadores

int main(int argc, char** argv) {
     //Inicializo y declaro las variables de tipo entero, y los apuntadores
    int x,y,*p1,*p2;

    printf("Ingrese el valor de x");
    scanf("%d",&x);//Introducir el valor de la variable
    printf("Ingrese el valor de y");
    scanf("%d",&y);//Introducir el valor de la variable
    //A los apuntadores se les asigna los valores de las variables ingresadas
    p1=&x;
    p2=&y;
    
    printf("\nEl valor de x es : %d",x);
    printf("\nLa dirección de x es : %p",x);
    printf("\nEl valor de X de forma indirecta es : %d",*p1);
    
    printf("\n\n\nEl valor de y es : %d",y);
    printf("\nLa direccion de y es : %p",y);
    printf("\nEl valor de X de forma indirecta es : %d",*p2);

    //Me di cuenta de que si pongo en "x" y "y", los mismos valores, me van a dar la misma direccion 
    //y si cambio los numeros cambia su dirección.
    return (EXIT_SUCCESS);
}

