// C program to print prime numbers between 1 to n, given n

#include<stdio.h>
#include<math.h>
int isprime(int num)
{
    int i;
    for(i=2; i<=sqrt(num);i++)
    {
        if(num % i == 0)
            return -1;
    }
    return 1;
}
int main()
{
    int n = 1000,i;

    for(i = 2; i<n;i++)
    {
        if(isprime(i) == 1)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
