#include "Funciones.h"
#include "Funciones.h"

float PI=3.14159;

int suma (int a, int b){
    int res;
    res=a+b;
    return res;
}
int resta (int a, int b){
    int res;
    res=a-b;
    return res;
}
char primer_caracter(char* cadena){
    return cadena [0];
}
double area_circulo (int radio){
    return PI*radio*radio;
}