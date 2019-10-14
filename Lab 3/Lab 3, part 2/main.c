#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Problem 2*/
    float R1,R2,R3;
    char C;
    printf("\nIs the resistances in Series or Parallel?\nEnter \"P\" for parallel OR \"S\" for series:\n");
    scanf("%c", &C);
    printf("\nPlease enter your 1st resistance:");
    scanf("%f", &R1);
    printf("\nPlease enter your 2nd resistance:");
    scanf("%f", &R2);
    printf("\nPlease enter your 3rd resistance:");
    scanf("%f", &R3);
    if (C == 'S' || C == 's'){
        float Req = R1+R2+R3;
        printf("\nThe equivalent resistance = %f", Req);
    }else{
        if ((R1 == 0 && R2 == 0) && R3 ==0){
            printf("\nThe equivalent resistance = 0\n");
        }else{
            if (R1 == 0){
                float r2 = 1/R2;
                float r3 = 1/R3;
                float r = r2+r3;
                float Req = 1/r;
                printf("\nThe equivalent resistance = %f", Req);
            }else if (R2 == 0){
                float r1 = 1/R1;
                float r3 = 1/R3;
                float r = r1+r3;
                float Req = 1/r;
                printf("\nThe equivalent resistance = %f", Req);
            }else if(R3 == 0){
                float r1 = 1/R1;
                float r2 = 1/R2;
                float r = r1+r2;
                float Req = 1/r;
            printf("\nThe equivalent resistance = %f", Req);
            }else if (R1 == 0 && R2 == 0){
                float r3 = 1/R3;
                float r = r3;
                float Req = 1/r;
                printf("\nThe equivalent resistance = %f", Req);
            }else if (R1 == 0 && R3 == 0){
                float r2 = 1/R2;
                float r = r2;
                float Req = 1/r;
                printf("\nThe equivalent resistance = %f", Req);
            }else if (R2 == 0 && R3 == 0){
                float r1 = 1/R1;
                float r = r1;
                float Req = 1/r;
                printf("\nThe equivalent resistance = %f", Req);
            }else{
                float r1 = 1/R1;
                float r2 = 1/R2;
                float r3 = 1/R3;
                float r = r1+r2+r3;
                float Req = 1/r;
                printf("\nThe equivalent resistance = %f", Req);
            }
        }
    }
    return 0;
}
