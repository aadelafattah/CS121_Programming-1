#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Exercise 1*/
    printf("*\n**\n***\n****\n");
    printf("\n\n\n");

    /*Exercise 2.1*/
    printf("*********\n*\t*\n*\t*\n*\t*\n*\t*\n*\t*\n*********");
    printf("\n\n\n");

    /*Exercise 2.2*/
    printf("   ***   \n");
    printf("  *   *   \n");
    printf(" *     *   \n");
    printf("*       *   \n");
    printf("*       *   \n");
    printf(" *     *   \n");
    printf("  *   *   \n");
    printf("   ***   \n");
    printf("\n\n\n");

    /*Exercise 3*/
    printf("\"Ahmed said: \"I searched online and found that \\, \", new lines (\'\\n\') and tabs (\'\\t\') are among the special characters.\"");
    printf("Mohamed replied: \"Great, I also managed to make a beep sound using the special character\'\\a\'. Hear this ..\" \"");
    printf("\n\n\n");

    /*Problem1*/
    float G1,G2,G3,G4,G5;
    printf("Enter your 1st grade: ");
    scanf("%f",&G1);
    printf("Enter your 2nd grade: ");
    scanf("%f",&G2);
    printf("Enter your 3rd grade: ");
    scanf("%f",&G3);
    printf("Enter your 4th grade: ");
    scanf("%f",&G4);
    printf("Enter your 5th grade: ");
    scanf("%f",&G5);
    float sum = G1+G2+G3+G4+G5;
    float av = sum/5;
    printf("Average Grade= %f\n", av);
    printf("\n\n\n");

    /*Problem 2*/
    #define PI 3.14159

    float r,a,d,c;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    d=2 * r;
    printf("Diameter= %f\n", d);
    a= PI * r*r;
    printf("Area= %f\n", a);
    c=PI * 2*r;
    printf("Circumference= %f", c);

    return 0;
}
