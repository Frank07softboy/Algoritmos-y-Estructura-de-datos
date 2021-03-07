
#include <stdio.h>
#include <stdlib.h>
//Programa. Números factoriales n!
//Empezamos el programa con el prototipo de la función
int factorial(int n){//Comenzamos a implementar, en esta línea recibe un dato para verificar 
        if(n == 1){//Aqui se verificará que sea igual a 1, de lo contrario hara lo siguiente:
        return (1);
    } else{
        return (n * factorial(n - 1));
    }
}

int main(int argc, char** argv) {
    
    int n=0;//Declaro e inicializo una variable en cero para que el usuario ingrese el valor
    
    printf ("Teclee el número a evaluar: ");
    scanf("%d",&n);
    
    printf ("\nEl resultado es:  %d", factorial(n));//Se manda a llamar la funcion, y se manda el valor de n
 
    return (EXIT_SUCCESS);
}

