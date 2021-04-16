//C program to calculate the area of triangle using the formula A = sqrt(s(s-a)(s-b)(s-c)) where s = (a+b+c)/2

#include<stdio.h>
#include<Math.h>
int main()
{
    int a=3,b=4,c=5; //Given
    float s,area;

    //calculate s
    s = (a+b+c)/2;

    //Area
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    //print result
    printf("Area is %f",area);

    return 0;
}
