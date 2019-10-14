#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    while (n<0||n>1000000){
        scanf("%d", &n);
    }
    int arr[n],i=0;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int temp=0;
    for(i=0;i<n/2;i++){
        temp=arr[n-1-i];
        arr[n-1-i]=arr[i];
        arr[i]=temp;
    }
    for (i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
