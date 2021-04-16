// Linear Search

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},key=4;
    int n = sizeof(arr)/sizeof(int),i,found=0; // length of array

    for(i = 0;i<n;i++)
    {
        if(arr[i] == key)
        {
            printf("%d is found at index %d in the array", key,i);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("%d is not found in the array",key);

    }
    return 0;
}
