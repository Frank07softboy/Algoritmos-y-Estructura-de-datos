
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char** argv) {

    //Arreglo de una sola dimension
    int x;
    printf ("Digite el tamaño del arreglo:  ");
    scanf("%d",&x);
    
    int arreglo[x],i;
    printf("[");
    for (i=0;i<x;i++){
        arreglo[i] = i;
        printf ("%d ",arreglo[i] );
    }//Se imprimiran las posiciones del arreglo
   printf("]");
   
 
   for (i=0;i<x;i++){ //Le asiganremos valores a las posiciones del arreglo
       printf("\nIngrese un numero:  ");
        scanf ("%d ",&arreglo[i] );
    }
 
   
    return (EXIT_SUCCESS);
}



