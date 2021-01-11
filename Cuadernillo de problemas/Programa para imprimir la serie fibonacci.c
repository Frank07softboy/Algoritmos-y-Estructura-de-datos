

#include <stdio.h>
#include <stdlib.h>

//Programa para imprimir la serie fibonacci

int main(int argc, char** argv) {
//Se inicializa y declara una variable de tipo entero que almacenara el numero de valores a imprimir
    int n ;
    
    printf("Hasta que numero de la serie quieres obtener:  ");
    scanf("%d",&n);//El usuario ingresa el numero de valores a imprimir 
    //Declaro las variables de tipo entero
    int x  = 0;
    int y  = 1;
    int z  = 1;
    int a  = 1;
    
    while (a<n){//Este ciclo while, mientras que la sea menor a "n", se seguira ciclando
        printf("%d\n",x);
 
        a = a + 1;
        z = x + y;
        x = y;
        y = z;
    }
    printf("%d\t",x);//Imprimira los datos obtenidos del while
    return (EXIT_SUCCESS);
}

 