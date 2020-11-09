/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Martines II
 *
 * Created on 5 de noviembre de 2020, 03:30 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float A=10.23;
    float B=11;
    float C=23.2;
    float D=5.2;
    
    if(A>B && A>C && A>D){
        printf("A es el mayor de todos");
    }else
        if(B>A && B>C && B>D){
            printf("B es el mayor de todos");
        }else
            if(C>A && C>B && C>D){
                printf("C es el mayor de todos");
            }else
                if(D>A && D>B && D>C){
                    printf("D es el mayor de todos");
                }else
                printf("Todos son iguales");

    return (EXIT_SUCCESS);
}

