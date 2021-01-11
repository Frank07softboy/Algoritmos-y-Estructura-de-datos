

#include <stdio.h>
#include <stdlib.h>

//Programa para identificar si los valores ingresados son iguales o no

int main(int argc, char** argv) {
    //Incialize y declare las variables de formato entero
    int x,y,z;
    //El usuario ingresara el valor de de cada una de las variables
    printf ("Ingresar el valor para x,y, z de manera entera \n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    
    if (x == y && y == z){//Este if checara que todos sean iguales 
        printf("Todos son iguales");
    }//Si no imprimira que todos son diferentes
    else{
        printf ("Todos son diferentes");
    }
    
    return (EXIT_SUCCESS);
}
