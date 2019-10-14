#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846

double radians(double angle){
    double rad = angle * (M_PI/180);
    return rad;
}
double factorial (int n){
    double fact=1;
    int i;
    for (i=n;i>0;i--){
        fact=fact*i;
    }
    return fact;
}
double power (double n, int m){
    int i;
    double pow = 1;
    for (i=1;i<=m;i++){
        pow = pow*n;
    }
    return pow;
}

int main()
{
    double ans = 0;
    double x=0;
    int n = 0;
    scanf("%lf %d", &x, &n);
    x = radians(x);
    ans = x;
    int i;
    for(i = 1; i< n;i++){
        ans = ans + (power(-1,i)*power(x,2*i+1)/factorial(2*i+1));
    }
       printf("calculated %.10lf expected %.10lf\n", ans, sin(x));
}
