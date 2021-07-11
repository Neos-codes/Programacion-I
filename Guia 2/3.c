#include <stdio.h>

/*
Escribe un programa que pida un número entero n, a continuación,
pida ingresar n números enteros y luego imprima: el menor, el mayor,
el promedio (entero) y la mediana. Valide que n sea un número mayor a cero.
*/

int main(){

    int n, prom = 0;

    scanf("%d", &n);
    int array[n];

    // Leer arreglo
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
        prom += array[i];
    }

    // Selection sort (ordenar)
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(array[j] < array[i]){
                // Swap
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }

    printf("Menor: %d   Mayor: %d   Promedio: %d   Mediana: ", array[0], array[n - 1], prom/n);

    // Mediana
    if(n % 2)   // n impar
        printf("%d", array[n/2]);
    else        // n par
        printf("%d", (array[n/2] + array[n/2 - 1])/2);

    return 0;
}