// C program to find the sum of digits of integer and reverse of the num

#include<stdio.h>
int main()
{
    int sum=0,rev=0,num= 1938298,i=0;

    while(num >0)
    {
        i = num % 10;   //taking last digit
        sum = sum + i;  //keeping sum
        rev = rev * 10 + i; //finding reverse
        num = num / 10;
    }

    printf("The sum is %d and reverse if %d", sum,rev);
    return 0;
}
