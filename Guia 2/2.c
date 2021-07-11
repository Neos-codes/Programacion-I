#include <stdio.h>

/*
Escribe un programa que pida un número entero n y a continuación
imprima las n primeras potencias de dos. El programa debe validar
la entrada cuidando que el valor ingresado no sea negativo.
*/

int main(){

    int n;

    do{
        scanf("%d", &n);
    }while(n < 0);

    if(n == 0){
        printf("0\n");
        return 0;
    }

    int num = 2;
    printf("%d ", num);
    for(int i = 0; i < n - 1; i++){
        num *= 2;
        printf("%d ", num);
    }

    printf("\n");


    return 0;
}