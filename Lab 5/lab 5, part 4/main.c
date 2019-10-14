#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k;
    scanf("%d %d", &n, &k);
    int array[n];
    int i = 0;
    for (i = 0; i<n; ++i){
        scanf("%d", &array[i]);
    }
    k=k%n;
    int temp[k];
    for (i = 0; i<k; ++i){
        temp[k-1-i]=array[n-1-i];
    }
    for (i = 0; i<(n-k); ++i){
        array[n-1-i] = array[n-k-1-i];
    }
    for(i=0; i<k; ++i){
        array[k-1-i]=temp[k-1-i];
    }
    for (i = 0; i<n ; i = i + 1){
        printf("%d ", array[i]);
    }
    return 0;
}
