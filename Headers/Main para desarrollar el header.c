

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main(int argc, char** argv) {

    int a=3, b=2, c;
    float area;
    char inicial;
    
    c=suma(a,b);
    printf("La suma es: %d\n",c);
    c=resta(a,b);
    printf("La resta es: %d\n",c);
    
    area=area_circulo(2);
    printf("El area del ciculo es: %f",area);
    
    inicial=primer_caracter("Francisco");
    printf("El primer caracter es: %c", inicial);
    
    return (EXIT_SUCCESS);
}

