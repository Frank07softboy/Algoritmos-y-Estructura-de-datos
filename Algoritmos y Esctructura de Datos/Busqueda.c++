#include <iostream>
#include <cstdlib>

using namespace std;

class Busqueda{
private:
    int datos [5];
    int numeros [5];
public:
    void llenado();
    void llenado2();
    void seleccion();
    void seleccion2();
    void secuencial (int);
    void binaria (int);
    Busqueda();
    ~Busqueda();
};
Busqueda::Busqueda(){
    
}
Busqueda::~Busqueda(){
    
}

void Busqueda::llenado(){
    int i, nu;
    cout<<"Ingresa 5 numeros para busqueda secuencial. "<<endl;
    for (i=0;i<5;i++){
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>nu;
        datos[i]=nu;
    }
}
void Busqueda::seleccion(){
    int i,j,a,min;
    for(i=0;i<5;i++){
        min=i;
        for (j=i+1;j<5;j++){
            if (datos[j]<datos[min]){
                min=j;
            }
        }
        a=datos[i];
        datos[i]=datos[min];
        datos[min]=a;
    }
}
void Busqueda::llenado2(){
    int o, nu;
    cout<<"Ingresa 5 numeros para la busqueda binaria. "<<endl;
    for (o=0;o<5;o++){
        cout<<"Ingresa el numero ("<<o+1<<"): ";
        cin>>nu;
         numeros[o]=nu;
    }
}
void Busqueda::seleccion2(){
    int o,j,a,min;
    for(o=0;o<5;o++){
        min=o;
        for (j=o+1;j<5;j++){
            if (numeros[j]<numeros[min]){
                min=j;
            }
        }
        a=numeros[o];
        numeros[o]=numeros[min];
        numeros[min]=a;
    }
}
void Busqueda::secuencial(int element){
    seleccion();
    int i;
    cout<<"¿Que dato deseas buscar?"<<endl;
    char flag='F';
    i=0;
    while ((flag=='F')&&(i<5)){
        if (datos[i]==element){
            flag='v';
            break;
        }
        i++;
    }
    if(flag=='F'){
        cout<<"El dato: "<<element<<" no existe en el arreglo";
    }
    else{
        cout<<"El dato: "<<element<<" se encuentra en la posición ["<<i<<"] del arreglo"<<endl;
    }
} 
void Busqueda::binaria(int dato){
    seleccion2();
    
    int menor,mayor,mitad;
    char flag = 'F';
    
    menor=0;
    mayor=5;
    
    while (menor <= mayor){
        mitad = (menor+mayor)/2;
        if (numeros[mitad] == dato){
            flag = 'V';
            break;
        }
        if (numeros [mitad] > dato){
            mayor = mitad-1;
            mitad = (menor+mayor)/2;
        }
        if (numeros [mitad] > dato){
            menor = mitad+1;
            mitad = (menor+mayor)/2;
        }   
    }
    if (flag == 'V'){
        cout<<"El número a sido encontrado en la posición:   "<<mitad<<endl;
    }else{
        cout<<"No se encontró.  "<<":"<<"(";
    }
}

int main(int argc, char** argv) {

    int numero, elemento;
    Busqueda objeto1;

    cout<<"Empecemos por busqueda secuencial"<<endl;
    objeto1.llenado();
    cout<<"¿Que elemento deseas buscar de los ingresados?"<<endl;
    cin>>numero;
    objeto1.secuencial(numero);
    cout<<endl<<"Ahora intentaremos por busqueda binaria"<<endl;
    objeto1.llenado2();
    cout<<"¿Que elemento deseas buscar de los ingresados?"<<endl;
    cin>>elemento;
    objeto1.binaria(elemento);
    return 0;
}

