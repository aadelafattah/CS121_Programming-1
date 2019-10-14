#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void convert (int n, int base){
    if (n/base){
        convert(n/base, base);
    }
    printf("%X", n%base);
}

int main(){
    int n, base;
    scanf("%d %d", &n, &base);
    convert(n,base);
    return 0;
}
