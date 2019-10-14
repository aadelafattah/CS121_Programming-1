#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, d, e, f, g, x, y, z;
    double ans1, ans2, ans3, ans4;
    char Breaker = 'Y';
    while (Breaker == 'Y' || Breaker == 'y'){
        char ob = 'z';           /*ob is for which operation or calculation*/
        printf("Please choose: [a or b or c or d]\n");
        scanf(" %c", &ob);
        if (ob == 'a' || ob == 'A'){
            printf("Enter X:\n");
            scanf("%lf", &x);
            ans1 = (3*x+2*pow(10,5))/(4*x+5.2*pow(10,4));
            printf("The answer = %lf\n", ans1);
        }else if (ob == 'b' || ob == 'B'){
            printf("Enter X, Y, Z:\n");
            scanf("%lf %lf %lf", &x, &y, &z);
            ans2 = (5*(pow((x+y+3)/(27+z),2)));
            if (z == -27){
                printf("Error\n\n");
            }else{
                printf("The answer = %lf\n", ans2);
            }
        }else if (ob == 'c' || ob == 'C'){
            printf("Enter a, b, c, d, e, f, g:\n");
            scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &g);
            ans3 = ((a+(b/c))/(d+(e/(f+g))));
            if (c == 0 || (f == 0 && g == 0)){
                printf("Error\n\n");
            }
            else{
                printf("The answer = %lf\n", ans3);
            }
        }else if (ob == 'd' || ob == 'D'){
            printf("Enter X, Y:\n");
            scanf("%lf %lf", &x, &y);
            ans4 = (pow(sin(x+y),2));
            printf("The answer = %lf\n", ans4);
        }

    }
    return 0;
}
