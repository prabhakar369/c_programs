// C program to find roots of a quadratic equation

#include<stdio.h>
#include<math.h>
int main()
{
    int a=2,b=-4,c=-5;
    float r1,r2,delta;
    //calculate b^2-4ac
    delta = b * b - 4 * a * c;

    if(delta == 0)//roots are equal
    {
        printf("Roots are %f and %f\n", -b/(2*a), -b/(2*a));
    }
    else
    {
        if(delta > 0)//root are distinct
        {
            printf("Roots are %f and %f\n", (-b + sqrt(delta))/(2 * a), (-b - sqrt(delta))/(2 * a));
        }
        else //roots are imaginary
        {
            printf("No roots\n");
        }
    }

    return 0;
}
