

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int i,j;
    int areglo2[3][4] ={{ 0,1,2,3},
                                { 1,2,3,4},
                                { 2,3,4,5}};
     
    for (i = 0; i< 3; i++){//Determinar el tamaño del arreglo
        for (j = 0; j< 4; j++){
            areglo2[i][j] = i+j;
        }
    }
    for (i = 0; i< 3; i++){//Ayudará a imprimir todos los valores del arreglo de dos dimensiones
        for (j = 0; j< 4; j++){
            printf("%d ", areglo2[i][j]);
        }
    }
        
    return (EXIT_SUCCESS);
}

