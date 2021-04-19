#include <stdio.h>

// TIMUS 1877. Bicycle Codes

int main(){

    int lock1, lock2;

    if((lock1%2 == 0) || (lock2%2 != 0))
        printf("YES");
    else
        printf("NO");

    return 0;
}