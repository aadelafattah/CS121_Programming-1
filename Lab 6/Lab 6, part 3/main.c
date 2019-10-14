#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int odd=0;
    for(i=0;i<n;i++){
        odd= odd^arr[i];
    }
    printf("%d", odd);
    return 0;
}
