// C program to compare two arrays using pointers

#include<stdio.h>
int isEqual(int *A,int *B,int lenA,int lenB)
{
    if(lenA == lenB)
    {
        for(int i = 0;i<lenA;i++)
        {
            if(A[i] != B[i])
            {
                return 1;
            }
        }
        return 0;
    }
    else
        return 1;
}
int main()
{
    int A[] = {1,2,3,4,5,6,7};
    int B[] = {1,2,3,4,5,6,7};

    if(isEqual(A,B,7,7) == 0)
        printf("Both the Arrays are Equal");
    else
        printf("Arrays Not Equal");

    return 0;
}
