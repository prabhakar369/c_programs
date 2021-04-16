// recursive and non recursive function for factorial

#include<stdio.h>
int fact_iter(int n)
{
    int fact = 1,i=1;
    while(i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}
int fact_rec(int n)
{
    if(n == 0 || n == 1)
            return 1;
    return n * fact_rec(n-1);
}
int main()
{
    int n=6;
    printf("The factorial of %d is %d\n",n,fact_iter(n));
    printf("The factorial of %d is %d",n,fact_rec(n));
    return 0;
}
