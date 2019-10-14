#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void convert (long long n, int base, char array[]){
    if (n/base){
        convert(n/base, base, array);
    }
    printf("%c", array[n%base]);
}

int main(){
    long long n;
    int base;
    char array[]={'0','1', '2','3','4','5','6','7','8','9',
                  'A','B','C','D','E', 'F', 'G', 'H', 'I',
                  'J', 'K', 'L', 'M', 'N', 'O','P', 'Q',
                  'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
                  'Z','a','b', 'c', 'd', 'e', 'f', 'g', 'h',
                  'i', 'j', 'k', 'l', 'm','n', 'o', 'p', 'q',
                  'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    scanf("%lld", &n);
    scanf("%d", &base);
    printf("\n");
    convert(n,base,array);
    return 0;
}
