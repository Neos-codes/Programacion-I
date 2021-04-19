#include <stdio.h>

    // Escribe un programa que pida tres números e imprima Cumple invariante si el primero sumado
    // al segundo es menor al cuadrado del tercero dividido por el primero.

int main(){

    // Leer 3 numeros enteros
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    // Verificar condición para imprimir "Cumple Invariante"
    if(n1 + n2 < (n3*n3)/n1){
        printf("Cumple Invariante\n");
    }


    return 0;
}