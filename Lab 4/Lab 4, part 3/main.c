#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int y;
    scanf("%d", &y);
    if (y > 0){
        if (y % 400 == 0){
            printf("Leap");
        }
        else if (y % 100 == 0 && y % 4 == 0){
            printf("Not Leap\n");
        }else if (y % 4 == 0){
            printf("Leap\n");
        }else{
            printf("Not Leap\n");
        }
    }else{
        printf("Error");
    }
    return 0;
}
