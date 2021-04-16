// recursive and no recursive program to find fibonacci sequence - can work on efficiency

#include<stdio.h>
int fib_r(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib_r(n-1) + fib_r(n-2);
}
void fib_rec(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",fib_r(i));
    }
}
void fib_iter(int n)
{
    int i,a,b;
    a = 0;
    b = 1;
    if(n >= 1)
        printf("%d ",a);
    if(n >= 2)
        printf("%d ",b);
    for(i = 2;i < n && n > 2;i++)
    {
        int c = a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}
int main()
{
    int n = 40;
    fib_rec(n);
    printf("\n");
    fib_iter(n);
    return 0;
}
