#include <stdio.h>

// TIMUS 1785. Lost in Localization

int main(){

    // Leer numero de monstruos
    int m;
    scanf("%d", &m);

    if(m >= 1 && m <= 4)
        printf("few");
    
    if(m >= 5 && m <= 9)
        printf("several");
    
    if(m >= 10 && m <= 19)
        printf("pack");
    
    if(m >= 20 && m <= 49)
        printf("lots");

    if(m >= 50 && m <= 99)
        printf("horde");    // Es mejor la alianza
    
    if(m >= 100 && m <= 249)
        printf("throng");

    if(m >= 250 && m <= 499)
        printf("swarm");
    
    if(m >= 500 && m <= 999)
        printf("zounds");
    
    if(m >= 1000)
        printf("legion");

    return 0;
}