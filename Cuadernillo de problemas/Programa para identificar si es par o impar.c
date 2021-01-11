

#include <stdio.h>
#include <stdlib.h>

//Programa para identificar si es par o impar

int main(int argc, char** argv) {

    //Inicializo y declaro las variables de formato entero
    int x, res;
    printf("Introduzca un número entero a evaluar para ver si es par o impar");
    scanf("%d",&x);//Se le pedirá al usuario que ingrese un numero para su determinacion
    res= x%2;
    if(res==0){//Este if es de mucha importancia para poder saber si es par o impar
        printf("Es par");
    }else{
        printf("No es par");
    }
    return (EXIT_SUCCESS);
}
