

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {

    int x=0;
    int n;
    
    printf ("Ingrese el número de materias a promediar: ");
    scanf ("%d",&n);
    
    float v[n];
    
    for(x; x<n; x++){
        printf ("Ingrese la sigiente calificación: ");
        scanf ("%f", &v[x]);
    }
    x=0;
    float suma = 0;
    for(x=0;x<n;x++){
        suma=suma + v[x];
    }
    printf("\n El promedio de las %d calificaciones ingresadas es de %f:",n,suma/n);
        
    return (EXIT_SUCCESS);
}

