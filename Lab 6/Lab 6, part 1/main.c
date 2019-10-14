#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    scanf("%d %d", &n,&m);
    while (n > 1000 || m> 1000 || n < 1|| m<1){
        scanf("%d %d", &n,&m);
    }
    int matrix[n][m];
    for (i = 0; i<n; i++){
        for (j = 0; j<m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i<m; i++){
        for (j = 0; j<n; j++){
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
