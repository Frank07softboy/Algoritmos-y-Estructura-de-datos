

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programa para obtener el area, e hipotenusa de un triangulo

int main(int argc, char** argv) {
    //Inicializo y declaro las variables de tipo flotante
    float base, altura, area, cateto, hipo;
    
    printf("Para obtener el área de un triangulo es necesario introducir la altura y la base");
    printf("\nPrimero que nada la altura:\t ");
    scanf("%f",&altura);//Pedirle al usuario la altura
    printf("\nAhora su base: \t");
    scanf("%f",&base);//Ahora pedirle su base
    float *res=&area;//Declaro un apuntador de tipo flotante a la direccion de area
    if(base>0 && altura>0){//Este if ayuda a que verifique que los datos esten bien
    *res=(base*altura)/2;
    printf("\nEl area de los datos ingresados es %f ",*res);
    }else{//Si no, imprimira que no se puede
        printf("\nNo se puede brother");
    }
    
    printf ("\n\n\nAhora que tenemos la base vamos a obtener su hipotenusa");
    printf("\n\nIngresar el valor del cateto 2: \n");
    scanf("%f",&cateto);//El usuario ingresa el vaor del cateto dos
    if(base>0 && cateto>0)//Este if es para que se verifique que si se pueda calcular la hipotenusa
    float *aux=&hipo;//Declaro otro apuntador de tipo flotante para obtener la hipotenusa
    *aux=sqrt(pow(base,2)+ pow(cateto,2));//Opera para obtener la hipotenusa, aqui utilizo el sqrt y pow
    printf("\nLa hipotenusa vale %f ",*aux);//Imprimira el resultado
    }
else{//Si no son correctos los datos, entonces:
        printf ("\nLos datos ingresados no son correctos");
    }
    
    return (EXIT_SUCCESS);
}

