#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int num;
    int den;
}fraction;

int GCD (int a, int b){
    int i;
    if (a<0){
        a=a*-1;
    }
    if (b<0){
        b=b*-1;
    }
    if (a==0){
        i = b;
        return i;
    }
    else{
        if(a>b){
            for (i=a;i>0;i--){
                if ((a%i==0)&&(b%i==0)){
                        return i;
                }
            }
        }
        else{
            for (i=b;i>0;i--){
                if ((a%i==0)&&(b%i==0)){
                    break;
                }
            }
        }
    }
    return i;
}

fraction add(fraction a, fraction b){
    fraction c;
    c.den= ((a.den)*(b.den));
    c.num= ((a.num)*(b.den))+((b.num)*(a.den));
    int simple = 1;
    simple = GCD (c.num,c.den);
    c.num/=simple;
    c.den/=simple;
    return c;
}

fraction minus(fraction a, fraction b){
    fraction c;
    c.den= ((a.den)*(b.den));
    c.num= ((a.num)*(b.den))-((b.num)*(a.den));
    int simple = 1;
    simple = GCD (c.num,c.den);
    c.num/=simple;
    c.den/=simple;
    return c;
}
fraction multiple(fraction a, fraction b){
    fraction c;
    c.den= ((a.den)*(b.den));
    c.num= ((a.num)*(b.num));
    int simple = 1;
    simple = GCD (c.num,c.den);
    c.num/=simple;
    c.den/=simple;
    return c;
}
fraction divide(fraction a, fraction b){
    fraction c;
        c.den= ((a.den)*(b.num));
        c.num= ((a.num)*(b.den));
        int simple = 1;
        simple = GCD (c.num,c.den);
        c.num/=simple;
        c.den/=simple;
    return c;
}

int main() {

    int gcd1 = 1, gcd2 = 1;
    fraction n1, n2, res;
    n1.num =1 , n1.den = 1;
    n2.num =1 , n2.den = 1;
    scanf("%d/%d", &n1.num,&n1.den);
    if (n1.den == 0){
        printf("Error");
        return 0;
    }
    gcd1 = GCD(n1.num,n1.den);
    n1.num/=gcd1;
    n1.den/=gcd1;
    char op;
    scanf(" %c", &op);
    scanf("%d/%d", &n2.num,&n2.den);
    if (n2.den == 0){
        printf("Error");
        return 0;
    }
    gcd2 = GCD(n2.num,n2.den);
    n2.num/=gcd2;
    n2.den/=gcd2;
    if (op=='+'){
        res=add(n1,n2);
        printf("=\n%d/%d", res.num, res.den);
    }
    else if (op=='-'){
        res=minus(n1,n2);
        printf("=\n%d/%d", res.num, res.den);
    }
    else if (op=='/'){
        res=divide(n1,n2);
        if (res.den == 0){
            printf("=\nError\n");
        }
        else{
            printf("=\n%d/%d", res.num, res.den);
        }
    }
    else if (op=='*'){
        res=multiple(n1,n2);
        printf("=\n%d/%d", res.num, res.den);
    }
    else{
        printf("Error\n");
    }
    return 0;
}
