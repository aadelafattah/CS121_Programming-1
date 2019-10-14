#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int number (int n, int reminder, int k){
    int i;
    for(i=0; i<k; i++){
        reminder = n % 10;
        n = n/10;
    }
    return reminder;
}
int counter (int n){
    int count = 0;
    while (n!=0){
        n = n/10;
        count++;
    }
    return count;
}

int main() {

    int n, k, i, rem=0, c;
    scanf("%d %d", &n, &k);
    c = counter (n);
    if (k>c){
        printf("0");
    }
    else{
        rem = number (n, rem, k);
        printf("%d", rem);
    }
    return 0;
}
