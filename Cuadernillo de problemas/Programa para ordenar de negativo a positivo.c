
#include <stdio.h>
#include <stdlib.h>

//Programa para ordenar de negativo a positivo

int main(int argc, char** argv) {
//Incializa y declara las variables de tipo entero y otras de flotante
    float aux; 
    int i,j,x;
    printf("Introduzca el numero de numeros a ingresar");
    scanf("%d",&x);//El usuario determinara el tamaño del arreglo a evaluar
    float v[x];
    
     for (i=0;i<x;i++){//Ciclara para introducir los valores al arreglo
        printf("Escriba un número positivo o negativo:  ");
        scanf("%f",&v[i]);
}
    for(i=0;i<x-1;i++) //Ciclara para que repita el ciclo donde se acomodaran los valores
        for(j=i+1;j<x;j++){//Cicla para que se acomoden los valores
             if(v[i]<v[j]){//Este if es el encargado de acomodar 
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                 }
         }
  }
 printf("[");
  for (i=x-1;i>=0;i--)//Este ciclo ayudará a imprimir los valores ya acomodados
      printf("%.2f,",v[i]); 
  }
 printf("]");
    return (EXIT_SUCCESS);
}

