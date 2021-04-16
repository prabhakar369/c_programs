// C program to print first n fibonacci numbers

#include<stdio.h>
int fib(int n)      //Much more optimized if solved with dp
{
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    if(n>2)
        return fib(n-1) + fib(n-2);
}

int fib_iter(int n)
{
    int a,b,c;
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    if(n>2)
        {
            a = 0;
            b = 1;
            while(n>2)
            {
                c = a + b;
                a = b;
                b = c;
                n--;
            }
            return c;
        }
}
int main()
{
    int n = 10;
    int i;

    for(i=1;i<=n;i++)
    {
        printf("%d ", fib_iter(i));
    }
    return 0;
}
