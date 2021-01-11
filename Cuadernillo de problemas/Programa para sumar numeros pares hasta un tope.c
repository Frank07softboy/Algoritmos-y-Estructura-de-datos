
#include <stdio.h>
#include <stdlib.h>

//Programa para sumar numeros pares hasta un tope

int main(int argc, char** argv) {
    //Inicializo y declaro las variables en formato entero
    int x,cont,sum,i,y;
    i=0;
    printf("Seleccione la cantidad de numeros pares para sumar");
    scanf("%d",&y);
    int v[y];//Declaro un arreglo de tipo entero
    for (x=1;x<=y;x++){//El ciclo for me ayudará a saber hasta que numero tendra que sacar los pares
        cont=0;
        if (x%2==0){//El if sera el encargado de solo agarrar los pares para sumarlos
           v[i]=x;
           i++;
        }
    }
    sum=0;//Le agrego un valor a la variable sum
    for (x=0;x<i;x++) {//Este ciclo me ayudará a sumar los numeros pares 
       sum=sum+v[x];
    }
   
    printf("La suma de los pares dentro de %d numeros es de %d\n",y,sum);//Imprimira la suma total
           
    return (EXIT_SUCCESS);
}

