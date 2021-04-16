// Binary Search iter and recursive

#include<stdio.h>
int bin_iter(int arr[],int begin,int end,int key)
{
    int mid;
    while(begin<=end)
    {
        mid = begin + (end - begin)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if(arr[mid] > key)
            {
                end = mid - 1;
            }
            else
            {
                begin = mid + 1;
            }
        }
    }
    return -1;
}

int bin_rec(int arr[],int begin,int end,int key)
{
    int mid = begin + (end - begin)/2;
    if(begin > end)
    {
        return -1;
    }
    if(arr[mid] == key)
    {
        return mid;
    }
    else
    {
        if(arr[mid] > key)
        {
            bin_rec(arr,begin,mid-1,key);
        }
        else
        {
            bin_rec(arr,mid+1,end,key);
        }
    }
}

int main()
{
    int arr[] = {12,13,14,15,16,17,29,35,67,89,90,100}; // input array must be sorted
    int key = 100, index;

    index = bin_rec(arr,0,(sizeof(arr)/sizeof(int))-1,key);
    //index = bin_iter(arr,0,(sizeof(arr)/sizeof(int))-1,key);
    if(index != -1)
    {
        printf("%d is found in array at index %d",key,index);
    }
    else
    {
        printf("%d is not found in array",key);
    }
    return 0;
}
