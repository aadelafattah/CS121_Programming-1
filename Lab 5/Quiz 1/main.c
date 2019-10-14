#include <stdio.h>
#include <math.h>
#define PI 3.142

int main()
{
    int x1,y1,i,j,k;
    scanf("%d %d", &x1,&y1);
    int arr1[x1][y1];
    for(i=0;i<x1;i++){
        for(j=0;j<y1;j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    int x2,y2;
    scanf("%d %d", &x2,&y2);
    int arr2[x2][y2];
    for(i=0;i<x2;i++){
        for(j=0;j<y2;j++){
            scanf("%d", &arr2[i][j]);
        }
    }int ans[x1][y2];
    int sum = 0;
    if(y1==x2){
        for(i=0;i<x1;i++){
            for(j=0;j<y2;j++){
                for(k=0;k<y1;k++){
                    sum= sum + arr1[i][k]*arr2[k][j];
                }
                ans[i][j] = sum;
                sum=0;
            }
        }
        printf("\n\n");
        for(i=0;i<x1;i++){
            for(j=0;j<y2;j++){
                printf("%d ", ans[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nError\n");
    }
    return 0;
}
