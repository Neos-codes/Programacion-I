#include <stdio.h>

// Escribe un programa que pida 3 números enteros e imprima al menos uno si al menos uno es negativo, 
// al menos dos si al menos dos lo son, todos en caso de que los tres lo sean
// y ninguno si todos son positivos.

int main(){

    // Leer 3 enteros
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    // Si al menos uno es negativo
    if(n1 < 0 || n2 < 0 || n3 < 0)
    printf("Al menos uno\n");

    // Si al menos 2 son negativos
    if((n1 < 0 && n2 < 0) || (n1 < 0 && n3 < 0) || (n2 < 0 && n3 < 0))
        printf("Al menos 2\n");

    // Si todos son negativos
    if(n1 < 0 && n2 < 0 && n3 < 0)
        printf("Todos son negativos\n");
    
    // Si todos son positivos
    if(n1 > 0 && n2 > 0 && n3 > 0)
        printf("Ninguno\n");

    return 0;
}