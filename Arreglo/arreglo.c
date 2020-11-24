/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Martines II
 *
 * Created on 21 de noviembre de 2020, 10:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main(int argc, char** argv) {

    int i=0;
    int v [100];
    
    v[0]=2; 
    v[1]=3;

    for(i=0;i<100;i++){
        printf ("%d\n", v[0]);
        printf("%d\n", v[1]);
        v[0]=  v[0]+ v[1];
        v[1]= v[0]+ v[1];
    }
 
    return (EXIT_SUCCESS);
}

