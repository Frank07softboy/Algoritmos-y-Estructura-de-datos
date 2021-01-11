
#include <stdio.h>
#include <stdlib.h>

//Programa que mezcla dos arreglos en uno solo

int main(int argc, char** argv) {
    //Inicializa y declara las variables en formato entero
  int x,y;
  printf("Determine el tamaño del primer arreglo");
  scanf("%d",&x);//El usuario determinara el tamaño del primer arreglo
  printf("Determine el tamaño del segundo arreglo");
  scanf("%d",&y);//El usuario determinara el tamaño del segunda arreglo
 
  //Declaro aquí los tres arreglos, donde el primero tendra dicho tamaño y el segundo otro, y en el tercero 
  //tendra el tamaño de los dos anteriores
  int aux, v1[x],v2[y],v3[x+y];
  int i,j;


  for (i=0;i<x;i++){//Este ciclo me ayudara a ingresar los valores al primer arreglo
    printf("Ingrese un numero para la posicion %d del  primer arreglo",i);
    scanf("%d",&v1[i]);
      }
     
  for (i=0;i<y;i++){//Este otro ciclo me ayudara a ingresar los valores al segundo arreglo
     printf("Ingrese un numero para la posicion %d para el segundo arreglo",i);
     scanf("%d",&v2[i]);
      }
 
 
  for(i=0;i<x;i++){//En este ciclo ira cambiando los valores al tercer arreglo
   v3[i]=v1[i];
  }
 
  for(i=0;i<y;i++) {//Ahora lo que esta en el tercero se le agregara lo del segundo
   v3[x+i]=v2[i];
  }
  printf("[");
  for (i=0;i<x+y;i++){//Este ciclo me ayudará a imprimir lo resultante del tercer arreglo
      printf("%d\t",v3[i]);
  }
  printf("]");
    return (EXIT_SUCCESS);
}

