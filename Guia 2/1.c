#include <stdio.h>

/* 
Escribe un programa que pida un número entero n
y a continuación imprima los n primeros números de la sucesión de fibonacci.
El programa debe validar la entrada.
*/

// Recursiva
int fib(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else
        return fib(n - 1) + fib(n - 2);
}

int main(){

    int n;
    do{
        scanf("%d", &n);
    }while(n <= 0);

    printf("%d", fib(n - 1));

    return 0;
}