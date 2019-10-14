#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M;
    scanf("%d %d", &N,&M);
    int array[N][M];
    int i,j;
    for(i=0; i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d", &array[i][j]);
        }
    }
    int sum[N];
    for (i=0; i< N; i++){
        sum[i]=0;
    }
    for (i=0; i<N;i++){
        for(j=0; j<M;j++){
            sum[i] = sum [i]+array[i][j];
        }
    }
    int flag = 0;
    int largest = sum [0];
    for (i=1;i<N;i++){
        if (sum[i]> largest){
            largest = sum [i];
            flag = i;
        }
    }
    int temp;
    for (j = 0; j<M;j++){
        temp = array[0][j];
        array[0][j]=array[flag][j];
        array[flag][j]=temp;
    }
    for(i=0; i<N;i++){
        for(j=0;j<M;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
