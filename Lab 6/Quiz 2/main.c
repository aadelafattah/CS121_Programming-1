#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long num;
    scanf("%d", &num);
    while (num<0){
        scanf("%d", &num);
    }
    int n0 = 0,n1 = 0,n2 = 0,n3 = 0,n4 = 0,n5 = 0,n6 = 0,n7 = 0,n8 = 0,n9 = 0;
    int n=num, rem;
    while(n!=0){
        rem= n%10;
        switch(rem){
            case 0:
                n0++;
                break;
            case 1:
                n1++;
                break;
            case 2:
                n2++;
                break;
            case 3:
                n3++;
                break;
            case 4:
                n4++;
                break;
            case 5:
                n5++;
                break;
            case 6:
                n6++;
                break;
            case 7:
                n7++;
                break;
            case 8:
                n8++;
                break;
            case 9:
                n9++;
                break;
        }
        n= n/10;
    }
    printf("\nzero is %d times", n0);
    printf("\none is %d times", n1);
    printf("\ntwo is %d times", n2);
    printf("\nthree is %d times", n3);
    printf("\nfour is %d times", n4);
    printf("\nfive is %d times", n5);
    printf("\nsix is %d times", n6);
    printf("\nseven is %d times", n7);
    printf("\neight is %d times", n8);
    printf("\nnine is %d times", n9);
    return 0;
}
