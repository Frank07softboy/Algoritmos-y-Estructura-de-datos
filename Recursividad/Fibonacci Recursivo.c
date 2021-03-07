#include <stdio.h>
#include <stdlib.h>
//Programa de serie fibonacci con recursividad
int serie_fibonacci(int n){//Creamos el prototipo de la funcion, e implementamos
    if (n == 0 || n == 1){
        return n;
    }else{
        return (fibonacci(n-1) + fibonacci (n-2));//Se manda a llamar asi mismo a la funcion 
    }       
}

int main(int argc, char** argv) {
    //Inicializo y declaro las variables en cero, la variable aux me ayudará a imprimir la serie
    int n=0;
    int aux=0;
 
    printf("¿Hasta que número desea encontrar?:   ");
    scanf("%d",&n);
   
    for (aux=1; aux<=n; aux++){//Ciclo que imprime la serie, y manda a llamar, y envia un valor a la funcion
        printf("%d\t ", serie_fibonacci(aux));
    }
    return (EXIT_SUCCESS);
}
