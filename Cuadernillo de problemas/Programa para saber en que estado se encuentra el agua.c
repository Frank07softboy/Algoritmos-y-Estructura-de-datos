

#include <stdio.h>
#include <stdlib.h>

//Programa para saber en que estado se encuentra el agua

int main(int argc, char** argv) {
     //Inicializo y declaro la variable de tipo flotante
    float temp;
    printf("Ingrese la temperatura del agua para saber en que estado esta \n", temp);
    scanf ("%f ",&temp);//El usuario ingresa la temperatura a evaluar
    //Los siguientes if decidiran que ruta mensaje agarrar para imprimir, dependiendo la temperatura
        if (temp<=99 && temp > 0 ){
                printf ("El agua esta en estado líquido");
         }
        else if (temp<0) {
                 printf("El agua está en estado sólido");
         }
        else if (temp>=100){
                printf("El agua ya se te esta quemando");
         }
            

    return (EXIT_SUCCESS);
}

