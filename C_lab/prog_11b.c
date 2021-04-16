// C program to illustrate the usage of call by value and call by reference

void swap(int a,int b)
{
  b = (a+b) - (a = b);
}

void swap_r(int *a,int *b)
{
    *b = (*a + *b) - (*a = *b);
}

#include<stdio.h>
int main()
{
    int a=10,b=11;

    printf("Numbers Initially %d , %d",a,b);

    swap(a,b);

    printf("\nNumbers after call by value swap %d , %d",a,b);

    swap_r(&a,&b);

    printf("\nNumbers after call by reference swap %d , %d",a,b);

   return 0;
}
