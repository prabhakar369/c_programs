// C program to swap two numbers using pointers

#include<stdio.h>
void swap(int *p,int *q)
{
    *q = (*p+*q)-(*p=*q);
}
int main()
{
    int A=100,B=200;
    printf("Before swap %d and %d\n",A,B);
    swap(&A,&B);
    printf("After swap %d and %d",A,B);
    return 0;
}
