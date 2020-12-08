
#include <stdio.h>
#include <stdlib.h>

void verificar (int);
void convCaF();
void convCaK();
void convFaC();
void convFaK();
void convKaC();
void convKaF();



int main(int argc, char** argv) {

    int opcion;
    
    do{
        opcion=0;
        system ("cmd /c cls");
        printf("Seleccione la opción deseada:\n");
        printf("1. Convertir de C a F\n");
        printf("2. Convertir de C a K\n");
        printf("3. Convertir de F a C\n");
        printf("4. Convertir de F a K\n");
        printf("5. Convertir de K a C\n");
        printf("6. Convertir de K a F\n");
        printf("7. Salir\n");
        printf("Selección: ");
        scanf("%d",&opcion);
        
        verificar(opcion);
    }
    while(opcion != 7);
    
    
    return (EXIT_SUCCESS);
}

void verificar (int opcion){
    switch(opcion){
        case 1 :{
            convCaF();
            system ("cmd /c cls");
            break;
        }
        case 2 :{
            convCaK();
            system ("cmd /c cls");        
            break;
        }
        case 3 :{
            convFaC();
            system ("cmd /c cls");
            break;
        }
        case 4 :{
            convFaK();
            system ("cmd /c cls");
            break;
        }
        case 5 :{
            convKaC();
            system ("cmd /c cls");
            break;
        }
        case 6 :{
            convKaF();
            system ("cmd /c cls");
            break;
        }
        case 7 :{
            printf("Tan, tan. Se acabo.");
            break;
        }
        
    }
}
void convCaF(){
    printf("\nIngrese los grados C: ");
    float c = 0;
    scanf("%f",&c);
    float f = c*1.8+ 32;
    printf("\nLos grados F son: %f \n",f);
    system("cmd /c pause");
}
void convCaK(){
    printf("\nIngrese los grados C: ");
    float cel = 0;
    scanf("%f",&cel);
    float ke = (cel + 273.15);
    printf("\nLos grados Kelvin son: %f \n",ke);
    system("cmd /c pause");
}
void convFaC(){
    printf("\nIngrese los grados F: ");
    float fa = 0;
    scanf("%f",&fa);
    float ce = ((fa-32)*0.55555555556);
    printf("\nLos grados C son: %f \n",ce);
    system("cmd /c pause");
}

void convFaK(){
    printf("\nIngrese los grados F: ");
    float f = 0;
    scanf("%f",&f);
    float kel = (f-32)*0.55555555556+273.15;
    printf("\nLos grados Kelvin son: %f \n",kel);
    system("cmd /c pause");
}


void convKaC(){
    printf("\nIngrese los grados K: ");
    float kelv = 0;
    scanf("%f",&kelv);
    float cels = kelv-273.15;
    printf("\nLos grados C son: %f \n",cels);
    system("cmd /c pause");
}

void convKaF(){
    printf("\nIngrese los grados K: ");
    float kelv = 0;
    scanf("%f",&kelv);
    float far = (kelv-273.15)*1.8+32;
    printf("\nLos grados F son: %f \n",far);
    system("cmd /c pause");
}
