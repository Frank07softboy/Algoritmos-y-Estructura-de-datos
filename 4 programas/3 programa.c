#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num[3] = {3,1,5};
    int aux;
    
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
           
           if(num[j] > num[j+1]){
               aux = num[j+1];
               num[j+1]= num[j];
               num[j] = aux;
           }
       } 
    }
    for(int i = 0; i < 3; i++){
        printf("%d\t",num[i]);
    }
    return (EXIT_SUCCESS);
}

