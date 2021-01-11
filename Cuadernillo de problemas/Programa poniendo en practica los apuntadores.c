
#include <stdio.h>
#include <stdlib.h>

//Programa poniendo en practica los apuntadores

int main(int argc, char** argv) {
    //Inicializo y declaro la variable de tipo entero
    int var;
 
    printf("Ingresa el valor de una variable de forma entera: ");
    scanf("%d",&var);//Ingresa el usuario el valor 
    //Se declaran los apuntadores de tipo entero 
    int *apuntador1=&var;
    int *apuntador2=apuntador1;

    printf("El valor de la variable es  %d. El del ap.1 es: %d y el ap.2 es: %d\n",var,*apuntador1,*apuntador2);
 //Imprimira lo ingresado por el usuario tres veces
    printf("\nIngrese un número entero...  ");
    scanf("%d",&*apuntador1);//Mediante el apuntador el usuario le dara un nuevo valor
 
    printf("El valor de la variable es  %d. El del ap.1 es: %d y el ap.2 es: %d\n",var,*apuntador1,*apuntador2);
//Imprimira el valor tres veces
    return (EXIT_SUCCESS);
}

