#include <stdio.h>
#include <stdlib.h>

void Scan (int a[], int n){
    if (n>1){
        Scan(a,n-1);
    }
    scanf("%d", &a[n-1]);
}

long long sumRow (int a[], int n){
    long long sum=a[n-1];
    if (n>1){
        sum= sum + sumRow(a,n-1);
    }
    return sum;
}

int Binary (int a[], long long sum){
    int size= sum%2;
    if (sum/2){
        size=size+(Binary(a,sum/2));
    }
    return size;
}

void Process(int t, int b[]){
    if (t>0){
        int n;
        scanf("%d", &n);
        int a[n];
        Scan(a,n);
        b[t-1]=(Binary(a,sumRow(a,n)));
        Process(t-1,b);
    }
}

void reverse(int a[], int left, int right) {
   int temp;
   if (left >= right)
     return;
   temp = a[left];
   a[left] = a[right];
   a[right] = temp;
   reverse(a, left+1, right-1);
}

void Print(int a[],int t){
    if(t>1){
        Print(a,t-1);
    }
    printf("%d\n", a[t-1]);
}

int main()
{
    int t;
    scanf("%d", &t);
    int ans[t];
    Process(t,ans);
    reverse(ans, 0, t-1);
    Print(ans, t);
    return 0;
}
