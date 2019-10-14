#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846

int main() {

    double x;
    int n;
    scanf("%lf %d", &x, &n);

    x = (x * M_PI) / 180;
    double ans = 0;

    int neg = -1;
    int p = 1;
    int i, j;
    for (i = 1; i <= n; i= i+1){
        neg = neg * (-1);
        double fact = 1;
        for (j = 1; j<= p; j = j+1){
            fact = fact * j;
        }
        ans = ans + neg*(pow(x,p)/fact);
        p = p + 2;
    }

    printf("calculated %.10lf expected %.10lf\n", ans, sin(x));


    return 0;
}
