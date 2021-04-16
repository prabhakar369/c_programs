//Write a c program to swap two numbers without using temporary variable

#include<stdio.h>
int main()
{
    int a= 100, b= 200;

    printf("Before Swap A :%d B :%d", a,b);

    //Swap1
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swap1 A :%d B :%d", a,b);

    //Swap2
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nAfter Swap2 A :%d B :%d", a,b);

    //Swap3 - might fail for some cases
    a = a * b;
    b = a / b;
    a = a / b;

    printf("\nAfter Swap3 A :%d B :%d", a,b);

    //Swap4
    b = (a + b) - (a = b);

    printf("\nAfter Swap4 A :%d B :%d", a,b);

    return 0;
}
