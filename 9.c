#include <stdio.h>

// Escriba un programa que pida 3 coordenadas (x, y) e imprima “contenido” si la tercera coordenada
// está contenida en el rectángulo delimitado por las primeras dos coordenadas.
// En caso contrario, imprima “no contenido”.

int main(){

    // Leer 3 pares (x, y)
    int x1, x2, x3, y1, y2, y3;
    printf("Ingrese el primer par (x,y): ");
    scanf("%d %d", &x1, &y1);
    printf("Ingrese el segundo par (x,y): ");
    scanf("%d %d", &x2, &y2);
    printf("Ingrese el tercer par (x,y): ");
    scanf("%d %d", &x3, &y3);

    if(x1 < x2){
        if(x3 < x1 && x3 > x2){
            printf("No contenido\n");
            return 0;
        }
    }
    else if(x3 > x1 && x3 < x2){
        printf("No contenido\n");
        return 0;
    }
    if(y1 < y2){
        if(y3 < y1 && y3 > y2){
            printf("No contenido\n");
            return 0;
        }
    }
    else if(y3 > y1 && y3 < y2){
        printf("No contenido\n");
        return 0;
    }

    printf("Contenido\n");

    return 0;
}