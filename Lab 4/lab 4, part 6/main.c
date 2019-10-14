#include <stdio.h>
#include <stdlib.h>

int main() {


    int x, y, x1, y1;
    scanf("%d %d", &x, &y);
    char z;

    if(x > 15 || x < 0){
        printf("Error\n");
    }
    else if (y > 15 || y < 0){
        printf("Error\n");
    }
    else{
        z = ((x<<4) | y);
        printf("%d\n", z);
    }
    return 0;
}
