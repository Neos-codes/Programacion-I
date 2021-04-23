#include <stdio.h>

// TIMUS 1820. Ural Steaks

int main(){

    int n, k, time;
    
    scanf("%d %d", &n, &k);

    if(n <= k){
        printf("2");
        return 0;
    }

    time = (2*n)/k;

    if((2*n)%k != 0)
        time++;
    
    printf("%d", time);  

    return 0;
}