// Calculate binary for a given decimal

#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
int main()
{
    int num= 1024,i;
    char bin[100],k=0;
    while(num > 0)  //binary long division
    {
        i = num % 2;
        bin[k++] = i + '0'; //converting num to char
        num = num/2;
    }
    bin[k] = '\0';
    printf("The binary number is:");
    reverse(bin);   // taking reverse and printing
    return 0;
}
