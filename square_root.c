//Perfect Square root using linear search and binary search
#include<stdio.h>
int sqrt_linear(int num)
{
    int i = 1;
    for(i=1;i<num;i++)
    {
        if(i*i == num)
            return i;
        else if (i*i > num)
            return i-1;
    }
    return -1;
}

int sqrt_binary(int num)
{
    int l,h,m;
    l = 0;
    h = num -1;
    while(l <= h)
    {
        m = l + (h - l)/2;
        if(m*m > num)
        {
            h = m - 1;
        }
        else if(m*m < num)
        {
            l = m + 1;
        }
        else if(m*m == num)
        {
            return m;
        }
    }
    return -1;
}

int main()
{
    int num = 25;

    printf("Square root of %d is %d",num, sqrt_binary(num));

    return 0;
}
