#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int x;
    scanf("%d", &x);
    int n, rem = 0, rev=0;
    n=x;
    while(n!=0){
        rem= n%10;
        rev= rev*10+rem;
        n= n/10;
    }
    if(rev==x){
        printf("%d is a palindrome number", x);
    }else{
        printf("%d is not a palindrome number", x);
    }
    return 0;
}
