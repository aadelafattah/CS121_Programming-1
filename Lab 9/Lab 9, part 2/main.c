#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int n, int i){
    if(i<n){
        printf("%d ", i);
        fun (n, (i+1));
    }else{
        printf("%d", n);
    }
}

int main() {

    int i = 1, n;
    scanf("%d", &n);
    fun (n, i);

    return 0;
}
