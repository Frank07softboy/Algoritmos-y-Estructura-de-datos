

#include <stdio.h>
#include <stdlib.h>

//Programa que se puede utilizar en una tienda como calculadora
int main(int argc, char** argv) {
    
    //Inicializo y declaro las variables de tipo flotante
    float precio,pago,total;
    printf("Introduzca el precio del articulo: ");
    scanf("%f",&precio);//El usuario ingresa el precio del producto
    printf("Con cuanto dinero va a pagar...");
    scanf("%f",&pago);//Al momento de que le pagan, el usuario digitara la cantidad con la que pagará
    if(pago>=precio){//Los valores introducidos pasaran a un if donde decidira si le alcanza o no
        total=pago-precio;
        printf("Su cambio es de %.2f\n",total);//Si alcanza, imprimira el cambio que recibira el cliente
    }
    else if(pago<precio){//Si no; entonces le dira que le falta dinero
        printf("Te falta varo carnal ☻\n ");
    }

    return (EXIT_SUCCESS);
}

