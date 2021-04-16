// C program to pointer based function to exchange values of two integers using passing by address

#include<stdio.h>
void exchange(int *p,int *q)
{
 *q = (*p + *q) - (*p = *q);
}
int main()
{
    int a=100,b=200;
    void (*exp)(int*,int*) = &exchange;
    printf("%d %d\n",a,b);
    (*exp)(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
