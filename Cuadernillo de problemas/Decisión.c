

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int x,y,z;
    
    printf ("Ingresar el valor para x,y, z de manera entera \n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    
    if (x == y && y == z){
        printf("Todos son iguales");
    }
    else{
        printf ("Todos son diferentes");
    }
    
    return (EXIT_SUCCESS);
}

