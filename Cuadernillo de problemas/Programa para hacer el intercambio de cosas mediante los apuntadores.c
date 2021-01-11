
#include <stdio.h>
#include <stdlib.h>

//Programa para hacer el intercambio de cosas mediante los apuntadores

void intercambio(int *apuntador1, int *apuntador2);//Prototipo de funcion

int main(int argc, char** argv) {
//Incializan y declaran variables de tipo entero con un valor
     int apuntador1=3, apuntador2=10;
    printf("Asignarle un valor entero al apuntador1:  ");
    scanf("%d",&apuntador1);//El usuario ingresara el valor
    printf("Asignarle un valor entero al apuntador2:  ");
    scanf("%d",&apuntador2);//El usuairo ingresara otro valor
 
    printf("Vamos a intercambiar: apuntador1=%d por apuntador2=%d\n",apuntador1,apuntador2);
 
    intercambio(&apuntador1,&apuntador2);//Manda a llamar a la funcion, y le manda los valores de los ap.
 
    return (EXIT_SUCCESS);
}
//Funcion ya implementada
void intercambio(int *apuntador1, int *apuntador2){
    int aux;
//Se realiza el cambio con ayuda de una variable aux
    aux=*apuntador1;
    *apuntador1=*apuntador2;
    *apuntador2=aux;
    printf("El intercambio es: apuntador1=%d apuntador2=%d\n",*apuntador1,*apuntador2);

}
