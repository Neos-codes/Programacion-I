#include <stdio.h>

// Escriba un programa que pida 3 números enteros e imprima variadito si, o bien, 
// exáctamente dos de ellos son pares o dos son impares. En caso contrario imprimir uniforme

int main(){

    // Leer 3 numeros enteros
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    // Verificar que 2 de ellos sean pares
    if((n1%2 == 0 && n2%2 == 0) || (n1%2 == 0 && n3%2 == 0) || (n2%2 == 0 && n3%2 == 0))
        printf("Variadito\n");
    // Sino, que 2 de ellos sean impares
    else if((n1%2 != 0 && n2%2 != 0) || (n1%2 != 0 && n3%2 != 0) || (n2%2 != 0 && n3%2 != 0))
        printf("Variadito\n");
    else
        printf("Uniforme\n");
    return 0;
}