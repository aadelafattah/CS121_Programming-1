#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int fibonacci (int a){
    if (a==1){
        return 1;
    }else if(a==0){
        return 0;
    }else{
        return (fibonacci(a-1)+ fibonacci(a-2));
    }
}

int main() {

    int n, f;
    scanf("%d", &n);
    f=fibonacci(n);
    printf("Fibonacci of %d = %d", n ,f);
    return 0;
}
