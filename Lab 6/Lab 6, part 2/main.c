#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,k;
    scanf("%d", &n);
    int arr1[n];
    for (i = 0; i<n;i++){
        scanf("%d", &arr1[i]);
    }
    int m;
    scanf("%d", &m);
    int arr2[m];
    for (i = 0; i<m;i++){
        scanf("%d", &arr2[i]);
    }
    i=0;
    j=0;
    k=0;
    int merge[n+m];
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            merge[k]=arr1[i];
            i++;
            k++;
        }else if(arr1[i]==arr2[j]){
            merge[k]=arr1[i];
            i++;
            k++;
            merge[k]=arr2[j];
            j++;
            k++;
        }else{
            merge[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        merge[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        merge[k]=arr2[j];
        j++;
        k++;
    }
    for(i=0;i<n+m;i++){
        printf("%d ", merge[i]);
    }
    return 0;
}
