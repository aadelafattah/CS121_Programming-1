#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void convert (int n, int base){
    if (n/base){
        convert(n/base, base);
    }
    if (n%base<16){
        printf("%X", n%base);
    }
    else if(n%base<36){
        printf("%c", n%base + '7');
    }else if (n%base<62){
        printf("%c", n%base + '=');
    }
}

int main(){
    int n, base;
    scanf("%d %d", &n, &base);
    convert(n,base);
    return 0;
}
