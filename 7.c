#include <stdio.h>

// Escribe un programa que pida cuatro números y los imprima en orden. No utilizar ciclos.

int main(){

    // Leer 4 numeros enteros
    int n1, n2, n3, n4;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    // Comparaciones para ordenar

    // Principio de Selection Sort
    if(n2 < n1){
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if(n3 < n1){
       int aux = n1;
        n1 = n3;
        n3 = aux; 
    }
    if(n4 < n1){
       int aux = n1;
        n1 = n4;
        n4 = aux; 
    }
    if(n3 < n2){
        int aux = n2;
        n2 = n3;
        n3 = aux; 
    }
    if(n4 < n2){
        int aux = n4;
        n4 = n2;
        n2 = aux;
    }
    if(n4 < n3){
        int aux = n4;
        n4 = n3;
        n3 = aux;
    }

    printf("n1: %d   n2: %d   n3: %d   n4: %d\n", n1, n2, n3, n4);


    return 0;
}