#include <stdio.h>

int main(){

//Escribe un programa que pida un número entero e imprima todos sus divisores entre el 2 y el 10.
//Sin ciclos

    int n;
    scanf("%d", &n);

    // Revisar e imprimir divisores del 2 al 10

    if(n%2 == 0){
        printf("2 ");
    }
    if(n%3 == 0){
        printf("3 ");
    }
    if(n%4 == 0){
        printf("4 ");
    }
    if(n%5 == 0){
        printf("5 ");
    }
    if(n%6 == 0){
        printf("6 ");
    }
    if(n%7 == 0){
        printf("7 ");
    }
    if(n%8 == 0){
        printf("8 ");
    }
    if(n%9 == 0){
        printf("9 ");
    }
    if(n%10 == 0){
        printf("10 ");
    }

    return 0;
}