/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: Martines II
 *
 * Created on 24 de noviembre de 2020, 01:58 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
        int X,Y,Z;
    printf("Introduzca el tamaño del arreglo: ");
    scanf(" %i",&X);
    int v[X];
    for(Y=0;Y<X;Y++)
    {
        scanf("%i",&Z);
        v[Y]=Z;
    }
    for(Y=0;Y<X;Y++)
    {
        printf("\nLos valores del arreglos son: %i",v[Y]);
    }

    return (EXIT_SUCCESS);

    return (EXIT_SUCCESS);
}

