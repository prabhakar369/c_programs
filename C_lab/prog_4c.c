//Check if a given number is armstrong no are not

#include<stdio.h>
#include<math.h>
int main()  //Doing this for three digit numbers , can be extended for n digit
{
    int num = 153, n = 3;
    int sum = 0,i,temp = num;
     while(num > 0)
     {
      i = num % 10;
      sum = sum + pow(i,3);
      num = num / 10;
     }
     if(temp == sum)
     {
         printf("The given number is Armstrong");
     }
     else
     {
         printf("The Given number is not Armstrong");
     }
    return 0;
}

