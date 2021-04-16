// C program to find the largest and smallest of the array of integers

#include<stdio.h>
int main()
{
    int A[] = {2,3,5,2,5,2,2,4,5,2,2,3,4,44,3,4,5,3,2,2,4,3,3,3,3,344};
    int max = A[0],min=A[0];
    int size = sizeof(A)/sizeof(int);
    int i;
    for(i=0;i<size;i++)
    {
        if(A[i]<min)
        {
            min = A[i];
        }
        if(A[i]>max)
        {
            max = A[i];
        }
    }

    printf("The smallest is %d and the largest is %d",min,max);

    return 0;
}
