/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tablasanidadas.c
 * Author: Martines II
 *
 * Created on 17 de noviembre de 2020, 11:26 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int tabla = 1;
    int tope = 1;
    int x = 1;
    int y = 10;
    
    while (tabla<=x){
        tope = 1;
        while (tope<=y){
            printf("%d X %d = %d\n",tabla,tope,tabla*tope);
            tope = tope + 1;
        }
        printf("----------\n");
        tabla = tabla + 1;
    }

    return (EXIT_SUCCESS);
}

