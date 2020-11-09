/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: Martines II
 *
 * Created on 9 de noviembre de 2020, 11:14 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float x=10.5;
    float y=10.4;
    float z=9;
    
    if (x>y && x>z){
        printf("x es el mayor de todos");
    }else
        if (y>x && y>z){
            printf ("y es el mayor de todos");
        }else
            if (z>x && z>y){
                printf("z es el mayor de todos");
            }else 
                printf("Todos son iguales");

    return (EXIT_SUCCESS);
}

