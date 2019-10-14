#include <stdio.h>
#include <stdlib.h>

void print (int i){
    if(i>0){
        int j=i;
        printf("*");
        print((j-1));
    }
}

void star (int n, int i){
    if (i<n){
        print(i);
        printf("\n");
        star(n, (i+1));
    }else if(i==n){
        print(n);
        printf("\n");
        star(n, (i+1));
    }
    else if (i<=2*n-1){
        int j = (i-n);
        print(n-j);
        printf("\n");
        star(n, (i+1));
    }
    else{
        return;
    }
}

int main()
{
    int i = 1, n;
    scanf("%d", &n);
    printf("\n");
    star(n,i);
    return 0;
}
