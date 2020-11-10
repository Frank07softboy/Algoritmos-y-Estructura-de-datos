/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Martines II
 *
 * Created on 10 de noviembre de 2020, 09:53 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
int n  = 12;
int x  = 0;
int y  = 1;
int z  = 1;
int a  = 1;
    
    while (a<n){
        printf("%d\n",x);
 
        a = a + 1;
        z = x + y;
        x = y;
        y = z;
    }
    printf("%d\n",x);

    return (EXIT_SUCCESS);
}

