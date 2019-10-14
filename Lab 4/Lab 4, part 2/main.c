#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b, ans;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    while (a > 1000 || a < -1000 || b > 1000 || b < -1000 ){
        printf("The integers must be between [-1000,1000]\n");
        scanf("%d %c %d", &a, &op, &b);
    }
    if (op == '+'){
        ans = (a + b);
        printf("%d %c %d = %d\n", a, op, b, ans);
    }
    else if (op == '-'){
        ans = (a - b);
        printf("%d %c %d = %d\n", a, op, b, ans);
    }
    else if (op == '*'){
        ans = (a * b);
        printf("%d %c %d = %d\n", a, op, b, ans);
    }
    else if (op == '/'){
            if (b == 0){
                printf("ERROR: Division by zero is not allowed!");
            }
            else{
                ans = (a / b);
            printf("%d %c %d = %d\n", a, op, b, ans);
            }
    }
    else if (op == '%'){
            if (b == 0){
                printf("ERROR: Division by zero is not allowed!");
            }
            else{
                ans = (a % b);
            printf("%d %c %d = %d\n", a, op, b, ans);
            }
    }
    else {
        printf("ERROR: Unsupported Operator!\n");
    }
    return 0;
}
