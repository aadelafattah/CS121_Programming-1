#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x, i, rem;
    x, i, rem = 1, 1, 1;
    scanf("%d", &x);
    if (x == 1){
        printf("%d is not prime", x);
    }
    else if (x >= 1 && x <= 1000000){
        for (i = 2; i<= x; ++i){
            rem = x % i;
            if(i < x && rem ==0){
                printf ("%d is not prime", x);
                break;
            }
            else if (i == x && rem == 0){
                printf("%d is prime", x);
            }
            }
        }else{
            printf("%d is not prime", x);
    }
    return 0;
}
