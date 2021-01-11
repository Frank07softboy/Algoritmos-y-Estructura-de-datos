

#include <stdio.h>
#include <stdlib.h>

//Programa para elevar numeros al cubo

int cubo(int no);//Prototipo de la funcion

int main(int argc, char** argv) {

    //Inicializo y declaro 
    int i,aux;
    printf("¿Cuántos números desea elevar al cubo?");
    scanf("%d",&i);
    for(aux=1;aux<=i;aux++){//El ciclo for me ayudara a evaluar cada numero, hasta donde el usuario ingreso 
        //el tope
        printf("El cubo del número %d es %d\n",aux,cubo (aux));//Con este se iran imprimiendo cada que de 
        //vuelta el ciclo, el numero sera elevado al cubo
    }
    return (EXIT_SUCCESS);
}

int cubo(int no){//Implemente la funcion
 int elev;//Inicializo y declaro una funcion de tipo entero
 elev=no*no*no;//Multiplico el numero por el mismo tres veces
 return elev; //Regresara el valor resultante
}