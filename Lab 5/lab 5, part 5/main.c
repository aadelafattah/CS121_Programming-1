#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1,i,j,k;
    scanf("%d", &n1);
    int Array1[n1];
    for(i=0;i<n1;i++){
        scanf("%d", &Array1[i]);
    }
    for(i=0; i<n1; i++)
    {
        for(j=i+1; j<n1;)
        {
            if(Array1[i] == Array1[j])
            {
                for(k=j; k<n1; k++)
                {
                    Array1[k] = Array1[k + 1];
                }
                n1--;
            }
            else{
                j++;
            }
        }
    }
    int n2;
    scanf("%d", &n2);
    int Array2[n2];
    for(i=0;i<n2;i++){
        scanf("%d", &Array2[i]);
    }
    for(i=0; i<n2; i++)
    {
        for(j=i+1; j<n2;)
        {
            if(Array2[i] == Array2[j])
            {
                for(k=j; k<n2; k++)
                {
                    Array2[k] = Array2[k + 1];
                }
                n2--;
            }
            else{
                j++;
            }
        }
    }
    printf("Array1: ");
    for(i=0;i<n1-1;i++){
        printf("%d, ", Array1[i]);
    }printf("%d\n", Array1[n1-1]);
    printf("Array2: ");
    for(i=0;i<n2-1;i++){
        printf("%d, ", Array2[i]);
    }printf("%d\n", Array2[n2-1]);
    int N=n1+n2;
    int Union[N];
    for(i=0;i<n1;i++){
        Union[i]=Array1[i];
    }
    for (j=0;j<n2;j++){
        Union[i+j]=Array2[j];
    }
    int Intersection[n1+n2];
    for (i=0;i<n1+n2;i++){
        Intersection[i]=Union[i];
    }
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N;)
        {
            if(Union[i] == Union[j])
            {
                for(k=j; k<N; k++)
                {
                    Union[k] = Union[k + 1];
                }
                N--;
            }
            else{
                j++;
            }
        }
    }
    printf("Union: ");
    for(i=0;i<N-1;i++){
        printf("%d, ", Union[i]);
    }printf("%d\n", Union[N-1]);
    int F=0;
    printf("Intersection:");
    for(i=0; i<n1+n2; i++)
    {
        for(j=i+1; j<n1+n2;j++)
        {
            if(Intersection[i] == Intersection[j])
            {
                if(F==0){
                    printf(" %d", Intersection[i]);
                    F=1;
                }
                else if (F==1){
                    printf(", %d", Intersection[i]);
                }
            }
        }
    }
    return 0;
}
