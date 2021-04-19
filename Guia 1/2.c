#include <stdio.h>

// Escribe un programa que pida dos números enteros e imprima el doble del menor de ellos.

int main(){

    // Leer 2 numeros enteros
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    // Si n1 es menor a n2
    if(n1 < n2)
        printf("%d\n", 2*n1);
    else
    printf("%d\n", 2*n2);

    return 0;
}