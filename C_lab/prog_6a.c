// C program to perform sorting brute force

#include<stdio.h>
int main()
{
    int arr[] = {10,22,2,2,4,2,4,3,2,3,4,4,242,2,4,2,2,4,22,2,56,7,6,6,4},i,j;
    int n = sizeof(arr)/sizeof(int);
    for(i = 0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                arr[j] = (arr[i] + arr[j]) - (arr[i] = arr[j]);
            }
        }
    }

    //sorted output
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
