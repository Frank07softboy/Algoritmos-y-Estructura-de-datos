

#include <stdio.h>
#include <stdlib.h>

//Programa para introducir valores en un arreglos e imprirlos

int main(int argc, char** argv) {
    //Inicializar y declarar las variables de tipo entero 
    int x,aux,j;
    printf("Ingrese el tamaño del arreglo");
    scanf("%d",&x);//El usuario determina el tamaño del arreglo
    //Inicializa y declara el arreglo con el tamaño que ingreso el usuario
    int arreglo [x];
    
    for (aux=0;aux<x;aux++){//Este ciclo for me ayuda a ingresar los valores a cada posicion del arreglo
        printf ("\nIngresa el valor para la posición %d: ",aux);
        scanf ("%d",&arreglo [aux]);
        
    }
    printf("Los valores agregados... \t " );
    printf("[  ");
    for (aux=0;aux<x;aux++){//Este ciclo ayuda para la impresion de los datos del arreglo
        
        printf("%d  ",arreglo [aux]);
    }
    printf("]");

    return (EXIT_SUCCESS);
}

