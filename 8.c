#include <stdio.h>

// Escribe un programa que reciba un entero "n" del 1 al 10 e imprima "Paranguacuatimilcuaro" n veces

int main(){

    // Leer entero
    int n;
    scanf("%d", &n);

    // Usar switch sin breaks para imprimir la cantidad de veces
    switch(n){
        case 10:
        printf("Paranguacuatimilcuaro\n");
        case 9:
        printf("Paranguacuatimilcuaro\n");
        case 8:
        printf("Paranguacuatimilcuaro\n");
        case 7:
        printf("Paranguacuatimilcuaro\n");
        case 6:
        printf("Paranguacuatimilcuaro\n");
        case 5:
        printf("Paranguacuatimilcuaro\n");
        case 4:
        printf("Paranguacuatimilcuaro\n");
        case 3:
        printf("Paranguacuatimilcuaro\n");
        case 2:
        printf("Paranguacuatimilcuaro\n");
        case 1:
        printf("Paranguacuatimilcuaro\n");
    }

    return 0;
}