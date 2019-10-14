#include <stdio.h>
#include <math.h>
#define PI 3.142

int main()
{
    int n,f,m,i,j,k;
    scanf("%d %d %d", &n,&f, &m);
    int arr1[n][f];
    for(i=0;i<n;i++){
        for(j=0;j<f;j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[f][m];
    for(i=0;i<f;i++){
        for(j=0;j<m;j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    int ans[n][m];
    int sum = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<f;k++){
                sum= sum + arr1[i][k]*arr2[k][j];
            }
            ans[i][j] = sum;
            sum=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
