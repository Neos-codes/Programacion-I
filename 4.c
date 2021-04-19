#include <stdio.h>

// Escribe un programa que pida 2 numeros, y si ambos son negativos, hacer swap

int main(){

    // Leer 2 numeros enteros
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    // Si ambos son negativos, swap
    if(n1 < 0 && n2 < 0){
        printf("Swap!\n");
        int aux = n1;
        n1 = n2;
        n2 = aux;
        
    }
    else{
        printf("No hay swap :(\n");
    }

    printf("n1: %d   n2: %d\n", n1, n2);

    return 0;
}