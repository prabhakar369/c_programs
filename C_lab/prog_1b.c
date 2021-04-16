//Write a c program to find the largest of three numbers using ternary operator

#include<stdio.h>
int main()
{
    long a= 1000000000000,b=200000000000,c=300000000000;

    printf("The largest number is : %ld", ( (a>b)?( (a>c)?(a):(c) ):( (b>c)?(b):(c) ) ) );
    return 0;
}
