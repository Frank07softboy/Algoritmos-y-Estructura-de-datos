

#include <stdio.h>
#include <stdlib.h>
//Programa sobre las direcciones de apuntadores

int suma(int , int , int );//Prototipo de la funcion

int main(int argc, char** argv) {

    //Inicializo y declaro las variables en formato entero
    int x,y,z,res;
    int*aux1=&x;//Declaro los apuntadores, apuntando a una variable
    int*aux2=&y;
    int*aux3=&z;
    printf("Introduce el valor de la variable x:  ");
    scanf("%d",&x);
    printf("Introduce el valor de la variable y:  ");
    scanf("%d",&y);
    printf("Introduce el valor de la variable z:  ");
    scanf("%d",&z);

    printf("\nImprima la dirección de x... %p",x);
    printf("\nImprima la dirección de x de forma indirecta... %p",*aux1);
    printf("\nImprima la dirección de y... %p",y);
    printf("\nImprima la dirección de y de forma indirecta... %p",*aux2);
    printf("\nImprima la dirección de z... %p",z);
    printf("\nImprima la dirección de z de forma indirecta... %p",*aux3);
    

    printf("\nLa suma de las tres variables es:  %d",suma(*aux1,*aux2,*aux3));//Manda a llamar la funcion

    return (EXIT_SUCCESS);
}
//Implementar la funcion 
int suma (int x, int y, int z){
    int res;//Inicializar y declarar una variable de tipo entero
    res=(x)+(y)+(z);
    return res;//retornar el valor de res
}
