

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
   int x;
   int j;
   int cantidad; 
   int aux;
   int bandera=1;

    printf("¿Cuántos números desea evaluar?");
    scanf("%d", &cantidad);
    
    int v[cantidad];
    
    for (j=0; j<cantidad; j++){
        printf("Ingrese los valores para el arreglo: ",j);
        scanf("%d", &v[j]);
    }

    for(x=0; x<cantidad && bandera==1; x=x+1){
        bandera=0;
        for(j=0; j<cantidad; j=j+1){
            if(v[j]>v[j+1]){
                bandera=1;
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for(x=0; x<cantidad; x=x+1){
        printf ("\nEl orden es: %d ", v[x]);
    }

    return (EXIT_SUCCESS);
}

