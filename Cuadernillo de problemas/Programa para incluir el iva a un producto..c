

#include <stdio.h>
#include <stdlib.h>

//Programa para incluir el iva a un producto.

//Incicio definiendo el prototipo de la funcion
float precio( float precios, float  iva);

int main(int argc, char** argv) {

    //Inicializo y declaro las variables de formato flotante
    float precios;//Esta variable sera ingresada por el usuario
    float iva=.16;//A esta variable se le asigna un valor de .16 que es igual al %16
    printf("Ingrese el precio del producto para sumarle su iva: $ ");
    scanf("%f",&precios);//El usuario digita el costo de producto sin iva
    printf ("El precio total con iva incluido es de $ %.2f\n  ",precio(precios,iva));//Se manda a llamar 
    //la funcion para imprimir el total, con todo e iva
    
    return (EXIT_SUCCESS);
}
float precio (float precios, float iva){
    float ivainc;//Inicialize esta variable para que almacenará el residuo de la operacion
    ivainc = precios+(precios*iva);//Se genera la operación
    return ivainc;//Se regresa el resudio o en este caso la variable ivainc.
}

