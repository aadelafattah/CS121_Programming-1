#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main()
{
    /*Problem 1*/

    printf("Hello to your apple counter!\n");
    int A;
    printf("Enter the number of your apples:\n");
    scanf("%d", &A);
    if (A % 12 == 0){
            if (A / 12 == 1){
                printf("You have 1 dozen of apples.\n");
            }else{
                A = A / 12 ;
                printf ("You have %d dozens of apples.\n", A);
            }
    }else{
        int D = A / 12;
        printf("You have %d dozens and %d apples.\n", D, A%12);
    }
    printf("\"An apple a day, keeps the doctor away\"\n");

    return 0;
}
