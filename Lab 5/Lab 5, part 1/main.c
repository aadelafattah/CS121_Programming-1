#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, fact;
    fact = 1;
    scanf("%d", &n);
    if (n == 0){
        printf ("1");
    }
    else if (n < 0) {
        printf ("Error");
    }
    else if (n <= 12 && n > 0){
        for(i = 1; i<=n; i = i + 1){
            fact = fact * i;
        }
        printf("%d", fact);
    }
    else{
        printf("Error");
    }
    return 0;
}
