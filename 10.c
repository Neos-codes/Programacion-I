#include <stdio.h>

// TIMUS 1409. Two Gangsters

int main(){

    // Leer latas derribadas por Harry y Larry
    int h, l;
    scanf("%d %d", &h, &l);

    // Imprimir latas no derribadas por Harry y Larry
    printf("%d %d", l - 1, h - 1);

    return 0;
}