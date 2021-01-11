

#include <stdio.h>
#include <stdlib.h>

//Programa que imprime los primeros 100 numeros, y luego los imprime al reves

int main(int argc, char** argv) {
    int x;
    for (x=1;x<=100;x++){//Cicla de manera que la x tiene que llegar al 100, y tiene que ir imprimiendo 
        //lo que vale x, y como va subiendo pues va aumentando su valor
        printf("%d\n",x);
    }
    for (x=100;x>=1;x--){//Se va a hacer lo mismo pero de manera inversa, ahora iniciara en x en 100,
        //y se le disminuira uno
        printf("%d\n",x);
    }
    return (EXIT_SUCCESS);
}

