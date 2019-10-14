#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long result (int x){
    long long resu = 0 + (3*(pow(x,5)));
    resu = resu + (2*(pow(x,4)));
    resu = resu - (5*(pow(x,3)));
    resu = resu - (1*(pow(x,2)));
    resu = resu + (7*(x));
    resu = resu - 6;
    return resu;
}

int main() {

    int x;
    scanf("%d", &x);
    long long res = 0;
    res = result (x);
    printf("%lld", res);
    return 0;
}
