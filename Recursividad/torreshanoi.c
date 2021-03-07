

#include <stdio.h>
#include <stdlib.h>
//Programa de las torres de Hanoi
int Torres_Hanoi(int n, char a, char b, char c){//Iniciamos el protocolo de la funcion y la implementamos
    int movimiento;//Declare una variable para el control de los movimientos
    if (n > 0){//Se manda el dato que el usuario inbgreso para ver si se puede hacer la operacion
        Torres_Hanoi(n -1, a, b, c);
        printf ("\nSe ha movido rondana %d de la barra %c hasta la %c.", n, a, c);
        movimiento=movimiento+1;
        Torres_Hanoi(n -1, b, a, c);
        return movimiento;
    }
}
int main(int argc, char** argv) {
    
    int n, movimiento;//Inicializa y declaro las variables de forma entera 
    printf ("Ingresa el número de rondanas:  ");
    scanf("%d", &n);
    movimiento = Torres_Hanoi (n, 'A', 'B', 'C');//Se manda a llamar la funcion y se le manda el valor de n
    
    return (EXIT_SUCCESS);
}


