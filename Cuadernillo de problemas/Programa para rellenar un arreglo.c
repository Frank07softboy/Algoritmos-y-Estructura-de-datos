

#include <stdio.h>
#include <stdlib.h>
//Programa para rellenar un arreglo 

int main(int argc, char** argv) {

    int i=0;//Inicializo y declaro las variables de formato entero 
    int aux,x;
    printf ("Ingrese el tamaño para el arreglo  ");
    scanf ("%d",&x);//El usuario ingresa el tamaño del arreglo
    int array [x];//Se declara el arreglo de formato entero
    printf ("Ingresa el primer dato para el arreglo ");
    scanf ("%d",&array[i]);//El primer dato lo dejo afuera para que en el ciclo for aparezca ingrese el sig. dato
    for(i=1;i<x;i++){//Se inica en 1 porque el cero lo puse anteriormente
        printf("Ingrese el siguiente dato.. ");
        scanf("%d",&array[i]);//El usuario digita cada valor del arreglo en cada una de las posiciones
    }
    printf("[");//Imprimo el corchete porque un arreglo se muestra [ ]
    for(i=0;i<x;i++){//Con este ciclo me ayudará a imprimir cada uno de los valores ingresados
        printf(" %d\t ",array[i]);
    }printf("]");
    return (EXIT_SUCCESS);
}

