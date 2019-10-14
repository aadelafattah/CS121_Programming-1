#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    if(a==0){
        printf("%d", b);
    }
    else if(b==0){
        printf("%d", a);
    }
    else if(a>b){
        for(i=b;i>0;i--){
            if((a%i==0)&&(b%i==0)){
                printf("%d ", i);
                break;
            }
        }
    }
    else if(b>a){
        for(i=a;i>0;i--){
            if((a%i==0)&&(b%i==0)){
                printf("%d ", i);
                break;
            }
        }
    }
    else{
        printf("%d", a);
    }
    return 0;
}
