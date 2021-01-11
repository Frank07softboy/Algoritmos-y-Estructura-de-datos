

#include <stdio.h>
#include <stdlib.h>

//Programa para imprimir los datos pares de 100 numeros

int main(int argc, char** argv) {
    //Incializa y declara la variable de tipo entero
    int x;
    for (x=1;x<=100;x++) {//Ciclara hasta que la x sea igual a 100
        if (x%2==0){//De aquí se sacarán los pares de las x iteradas
           printf("%d\n",x);
        }
    }
    return (EXIT_SUCCESS);
}

