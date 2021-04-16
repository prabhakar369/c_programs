//  Recursive and Non Recursive program to find the GCD of two Integers

#include<stdio.h>
int gcd_rec(int a,int b)
{
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a>b)
        return gcd_rec(a-b,b);
    else
        return gcd_rec(a,b-a);
}
int gcd_iter(int a,int b)
{
    while(a !=0 && b!= 0)
    {
        if(a>b)
        {
            a= a-b;
        }
        else
        {
            b=b-a;
        }
    }
    if(a == 0)
        return b;
    else
        return a;
}
int main()
{
    int a = 98, b = 56;
    printf("GCD of %d and %d is %d\n",a,b,gcd_rec(a,b));
    printf("GCD of %d and %d is %d\n",a,b,gcd_iter(a,b));
    return 0;
}
