

#include <stdio.h>
#include <stdlib.h>

//Programa para obtener la media de un conjunto de numeros

int main(int argc, char** argv) {
    //Inicializo y declaro las variables en formato entero
    int i,x;
    float suma=0;//Incializo y declaro en formato flotante, y le asigno un valor de 0
    
    
    printf("¿Tamaño del arreglo?");
    scanf("%d",&x);//El usuario determinara el tamaño del arreglo
    //Inicializo y declaro un arreglo de tipo entero
    int array[x];
    
    for (i=0;i<x;i++){//Con este ciclo integraremos cada dato a una dicha posicion
        printf("Número: ");
        scanf("%d",&array[i]);//Con este scanf se integrara
    }
    
    for(i=0;i<x;i++){//Aquí ira sumando, e ira ciclando para obtener una suma total de los datos 
        suma=suma+array[i];
    }
    printf("%f\n",suma/x);//Se utiliza la variable sum para obtener su media, ya que sum es la suma de los datos
    //y esa suma se dividira entre la cantidad del tamaño del arreglo
    return (EXIT_SUCCESS);
}

