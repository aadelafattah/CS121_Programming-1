#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long add (long long n, long long sum){
    if (n>0){
        sum = sum + (n%10) + add((n/10), sum);
        return sum;
    }else{
        sum+=0;
        return sum;
    }
    return sum;
}

int main() {

    long long sum = 0, n;
    scanf("%lld", &n);
    if(n>0){
        sum = add(n,sum);
    }else{
        n*=-1;
        sum = add(n,sum);
        sum*=-1;
        n*=-1;
    }
    printf("Sum of digits of %lld = %lld", n, sum);
    return 0;
}
