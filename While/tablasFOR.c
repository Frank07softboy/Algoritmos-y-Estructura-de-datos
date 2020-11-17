/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tablasFOR.c
 * Author: Martines II
 *
 * Created on 17 de noviembre de 2020, 11:38 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int tabla = 1;
    int x = 1;
    
    for (x=1; x <= 10; x++){
        for (tabla = 1; tabla <= 10; tabla++){
            printf("%d X %d = %d\n",tabla,x,tabla*x);   
        } printf("----------\n\n");
    }
       
    return (EXIT_SUCCESS);
}

