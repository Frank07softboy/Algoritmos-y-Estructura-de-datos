

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calculoarea (float,float);
float calculoperimetro (float,float);

int main(int argc, char** argv) {

    int x=0;
    float base, altura;
    
    printf("Introduzca el valor para x: ");
    scanf ("%f",&base);
    printf("\n Ahora introduzca el valor para y: ");
    scanf ("%f",&altura);
    
    printf("\t x= %f\n",base);
    printf("\t\t•\t"); printf("•\n\n");
    printf("y=%f",altura);
    printf("\t•\t"); printf("•\n\n");

    
    printf ("El area es: %f \n",calculoarea(base,altura));
    printf ("El perímetro es: %f",calculoperimetro(base,altura));
    
    
    
    return (EXIT_SUCCESS);
}
float calculoarea (float base, float altura){
    float area= base*altura;
    return area;
}
float calculoperimetro (float base, float altura){
    float per= base*2+ altura*2;
    return per;
}


