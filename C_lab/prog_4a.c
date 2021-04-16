// C program to generate multiplication table

#include<stdio.h>
void main()
{
    int n=12,upto=20,i;

    for(i = 1;i<=20;i++)
    {
        printf("%2d x %2d = %2d\n", n, i, n * i);
    }
    return 0;
}
