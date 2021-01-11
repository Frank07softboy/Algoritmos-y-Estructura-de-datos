

#include <stdio.h>
#include <stdlib.h>

//Programa que convierte las monedas(Dolar, Moneda mexicana, Euros)

//Empiezo definiendo el prototipo de funcion
void verificar (int);
void dollarpesos ();
void dollareuros ();
void pesosdollar ();
void pesoseuros ();
void eurosdollar ();
void eurospesos ();

int main(int argc, char** argv) {
    
    //Inicializo y declaro variables de tipo entero
    int opcion=0;
    int *aux = &opcion; //Se utiliza un apuntador que apunta a la direccion de la variable opcion
    do{//Se llega a este do, donde se debe de selecionar un numero para luego verificar la opcion
    
        printf ("Seleccione el tipo de moneda a cambiar\n");
        printf("1. Convertir de Dolares a Peso mexicano\n");
        printf("2. Convertir de Dolares a Euros\n");
        printf("3. Convertir de Peso mexicano a Dolares\n");
        printf("4. Convertir de Peso mexicano a Euros\n");
        printf("5. Convertir de Euros a Peso mexicano\n");
        printf("6. Convertir de Euros a Dolares\n");
        printf("7. Salir\n");
        printf("Selección: ");
        scanf("%d",&opcion);
        
        verificar (*aux);//Aquí mande a llamar la funcion verificar para que verifique que caso debe de realizar

    }
    
    while (*aux !=7 );//Este while me dice es util para checar la opcion, en cuanto sea 7 se debe de terminar
    //el programa
    return (EXIT_SUCCESS);
}
 //En la implementacion haré lo siguiente:
void verificar (int aux){//Implemente la funcion de verificar que me ayudará a verificar la opcion  
//que haya escogido el usuario
    switch (aux){//El switch me ayudará para decidir cual caso se va a utilizar y de acuerdo a eso 
 //se mandará a llamar una funcion prototipo
        case 1:{
            dollarpesos ();
            system ("cmd /c cls");        
            break;
        }
        case 2:{
            dollareuros ();
            system ("cmd /c cls");
            break;
        }
        case 3:{
            pesosdollar ();
            system ("cmd /c cls");
            break;
        }
        case 4:{
            pesoseuros ();
            system ("cmd /c cls");
            break;
        }
        case 5:{
            eurosdollar ();
            system ("cmd /c cls");
            break;
        }
        case 6:{
            eurospesos ();
            system ("cmd /c cls");
            break;
        }
        case 7:{
            printf ("Fue todo por hoy");
            break;
        }    
    }
}

void dollarpesos (){//Una vez que hay sido llamada alguna de estas funciones, pasará lo siguiente:

    float dolar;//Se inicializa y declara una variable de tipo flotante, para que el usuario ingrese su valor.
    printf ("Ingrese la cantidad de dolares: ");
    scanf ("%f",&dolar);
    float res=0; //Declare otra variable de tipo flotante para poder hacer la conversion
    res= dolar*19.96;
    printf("\nSon %.2f pesos\n\n\n",res);//Imprime en pantalla la operacion anteriormente realizada.
    
}//Hago lo mismo con las demás funciones, solo que cambian los datos, y el nombre de algunas variables
void dollareuros (){

    float dolares;
    printf ("Ingrese la cantidad de dolares: ");
    scanf ("%f",&dolares);
    float res=0;
    res= dolares*0.82;
    printf("\nSondolar %.2f euros\n\n\n",res);
    
}
void pesosdollar (){

    float pesos;
    printf ("Ingrese la cantidad de pesos: ");
    scanf ("%f",&pesos);
    float res=0;
    res= pesos*0.050;
    printf("\nSon %.2f dolares\n\n\n",res);
    
}
void pesoseuros (){

    float peso;
    printf ("Ingrese la cantidad de dolares a pesos");
    scanf ("%f",&peso);
    float res=0;
    res= peso*0.041;
    printf("Son %.2f euros\n\n\n",res);
    
}
void eurosdollar (){

    float euros;
    printf ("Ingrese la cantidad de dolares a pesos");
    scanf ("%f",&euros);
    float res=0;
    res= euros*1.23;
    printf("\nSon %.2f dolares\n\n\n",res);
    
}
void eurospesos (){
    
    float euro;
    printf ("Ingrese la cantidad de dolares a pesos");
    scanf ("%f",&euro);
    float res=0;
    res= euro*24.47;
    printf("\nSon %.2f pesos\n\n\n",res);
    
}
