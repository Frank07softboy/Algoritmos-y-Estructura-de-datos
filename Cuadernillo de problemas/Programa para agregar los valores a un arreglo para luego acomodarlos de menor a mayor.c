
#include <stdio.h>
#include <stdlib.h>

//Programa para agregar los valores a un arreglo para luego acomodarlos de menor a mayor

int main(int argc, char** argv) {

    //Llenar un arreglo donde el usuario determine el tamaño de dicho arreglo
    //de numeros enteros, acomodar de menor a mayor, e imrimirlos
   
    int x,i,d,cont; //declaré esta variables que me van a ayudar 
    //Llenaremos por teclado el arreglo
    printf("Ingrese el tamaño del arreglo a acomodar");//pide al usuario el tamaño del arreglo 
    scanf("%d",&cont);//introduce el tamaño para almacenarlo en la variable cont
    
    int *aux= &cont;//utilice un apuntador, que apunta a lo que hay en la direccion de la variable cont
    int v[cont]; //declaramos el arreglo en formato entero int
     
    for (x=0; x<*aux; x++){ //Inicialize un ciclo for para ingresar los numeros para las posiciones del arreglo
        printf("Ingresa un número entero");
        scanf("%d",&v[x]);//se van ingresando para que sigan el patron de posiciones 0,1,2...
    }
    //ordenar nuestro arreglo
    
    for(x=0;x<*aux;x++){
        for(i=0,d=1;d<20;i++,d++){
            if(v[i]>v[d]){//en este if acomodará los valores de menor a mayor
                int temp=v[d];
                v[d] = v[i];
                v[i]=temp;
            }
        }    
    }
    //imprimir el arreglo ya ordenado
    for (x=0;x<*aux;x++){//este for lo utilizo para imprimir los valores de menor a mayor
        printf("\t %d  ",v[x]);
    }
    
    return (EXIT_SUCCESS);
}

