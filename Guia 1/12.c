#include <stdio.h>

// TIMUS 2012. About Grisha N.

int main(){

    int f;
    scanf("%d", &f);

    // Grisha a lo más alcanza a hacer 5 ejercicios en 4 horas si se demora 45 minutos en cada uno
    // por lo tanto, si sus compañeros hacen menos de 7, no alcanza a hacer los 12

    if(f < 7)
        printf("NO");
    else
        printf("YES");

    return 0;
}