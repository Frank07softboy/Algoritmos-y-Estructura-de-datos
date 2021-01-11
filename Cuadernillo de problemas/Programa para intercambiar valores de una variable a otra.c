

#include <stdio.h>
#include <stdlib.h>

//Programa para intercambiar valores de una variable a otra

void intercambio(int x, int y);//definicion del prototipo de funcion

int main(int argc, char** argv) {
    
     int x, y; //Declaro la variables de formato entero
    printf("Digite el valor para la variable x:  ");//Le pide al usuario, ingrese el valor para variable
    scanf("%d",&x);//Se manda el valor a la variable x
    printf("Digite el valor para la variable y:  ");//Ahora le pide al usuario, ingrese el valor para variable
    scanf("%d",&y);//Se manda el valor a la variable y

 
  printf("Vamos a intercambiar: x= %d por el valor de y=%d\n",x,y);//Imprime lo que vamos a cambiar
 
  intercambio(x,y);//Mandamos llamar la funcion intercambio, para intercambiar los valores
  
    return (EXIT_SUCCESS);
}
void intercambio(int x, int y){ //Implementar la funcion
 int aux;
 aux=x;
 x=y;
 y=aux;

 printf("El intercambio es: x=%d y=%d\n",x,y);
}

