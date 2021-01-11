

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programa para calcular el area de un rectangulo

float calculoarea (float,float);//Prototipos de funciones
float calculoperimetro (float,float);

int main(int argc, char** argv) {
    //Inicializo y declaro las variables unas de formato entero y otra de formato flotante 
    int x=0;
    float base, altura;
    //El usuario ingresara los valores para obtener su area y perimetro
    printf("Introduzca el valor para x: ");
    scanf ("%f",&base);
    printf("\n Ahora introduzca el valor para y: ");
    scanf ("%f",&altura);
    
    printf("\t x= %f\n",base);//Imprime los vertices de un rectangulo 
    printf("\t\t•\t"); printf("•\n\n");
    printf("y=%f",altura);
    printf("\t•\t"); printf("•\n\n");

    printf ("El area es: %f \n",calculoarea(base,altura));//Mando a llamar la funcion y le mando las 
    //variables ingresadas, y hago lo mismo en la linea siguiente
    printf ("El perímetro es: %f",calculoperimetro(base,altura));

    return (EXIT_SUCCESS);
}//Implementacion de las funciones
float calculoarea (float base, float altura){
    float area= base*altura;
    return area;
}
float calculoperimetro (float base, float altura){
    float per= base*2+ altura*2;
    return per;
}
