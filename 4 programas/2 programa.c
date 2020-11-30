
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x=0;
    int n;
    
    printf ("Ingrese el número de valores a verificar: ");
    scanf ("%d",&n);
    
    float v[n];
    
    for(x; x<n; x++){
        printf ("Ingrese el número: ");
        scanf ("%f", &v[x]);
    }
    x=0;
    float min = v[0];
    float max = v[0];
    for(x=0;x<n;x++){
        if (v[x]<min){
            min= v[x];
        }
        if(v[x]>max){
            max= v[x];
        }
    }
    
    printf("\n El valor mínimo es: %f, y el valor maximo es: %f",min,max);
    

    return (EXIT_SUCCESS);
}

