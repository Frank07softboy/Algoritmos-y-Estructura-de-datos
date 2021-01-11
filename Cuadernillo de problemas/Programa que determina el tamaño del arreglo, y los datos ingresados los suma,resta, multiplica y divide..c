
#include <stdio.h>
#include <stdlib.h>

//Programa que determina el tamaño del arreglo, y los datos ingresados los suma,resta, multiplica y divide.

int main(int argc, char** argv) {
    //Inicializo y declaro las variables de tipo entero
    int x,y;
    printf("Indique el tamaño del array   ");
    scanf("%d",&y);//El usuario determina el tamaño del arreglo
    
    int array[y];//Declaro el arreglo, y en el tamaño puse la variable y que es donde el usuario puso el tamaño
    int sum,res,mul;//Inicializo y declaro otras variables de tipo entero
    float div;//Esta la inicializo y declaro en flotante porque el residuo puede darme decimales
           
    for (x=0;x<y;x++){//Declare un ciclo for para poder ingresar los datos a cada posicion
       printf("Introduzca un numero para la posición %d :",x);
       scanf("%d",&array[x]);
    }//Termina de ciclar y a las variables anteriormente declaradas se les asigna el valor de lo que tiene la 
  //primera posicion, para que luego tengo con que iniciar el ciclo for
    sum=array[0];
    res=array[0];
    mul=array[0];
    div=array[0];
    for (x=1;x<y;x++){//Con este ciclo for ahora se van a ir operando cada una de las variables
        sum=sum+array[x];//Aqui se iran sumando cada uno de los valor que se digitaron
        res=res-array[x];//Aqui se iran restando
        mul=mul*array[x];//Aqui se iran multiplicando
        div=div/array[x];//Aqui se dividiran
    }//Estas ultimas cuatro lineas me ayudarán a imprimir lo que resulto del ciclo for
     printf("\n\nSuma: %d\n",sum);
     printf("Resta: %d\n",res);
     printf("Multiplicación: %d\n",mul);
     printf("División: %f\n",div);
            
    return (EXIT_SUCCESS);
}
