

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *     printf("\n El logaritmo natural de x es: %.2f", Log10(x));
 */
int main(int argc, char** argv) {
    
    printf("Tabla de funciones\n\n");
    
    double x;
    double y;
    
    
    printf("Introduzca el valor de x: ",x);
    scanf("%lf",&x);

    printf("\n La raíz cuadrada de x es: %.2f\n",sqrt(x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("La función exponencial de base en x es: %.2f\n",exp(x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("El logaritmo natural de x de base esponencial es: %.2f\n", log (x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("El logaritmo de x de base 10 es: %.2f\n", log10 (x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("El valor absoluto de x es: %.2f\n", fabs (x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("El redondeo al entero pequeño que no sea menor que x es: %.2f\n ", ceil (x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("El redondeo al entero mas grande no mayor a x es: %.2f\n ", floor (x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    printf("Introduzca el valor y para la siguiente función ",y);
    scanf("%lf",&y);
    
    printf("El resultado de X elevado a la potencia es: %.2f\n ", pow (x,y));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    printf("Introduzca el valor y para la siguiente función ",y);
    scanf("%lf",&y);
    
    printf("El residuo de xfy como un número de punto flotante es: %.2f\n ", fmod(x,y));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("El seno trigonométrico de x es: %.2f\n ", sin (x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("El coseno trigonométrico de x es: %.2f\n ", cos (x));
    printf("Introduzca el valor x para la siguiente función ",x);
    scanf("%lf",&x);
    
    printf("La tangente trigonométrica de x es: %.2f\n ", tan (x));
    
    
    printf("\n\n Hasta aquí son las principales usadas");

    
    
    return (EXIT_SUCCESS);
}


