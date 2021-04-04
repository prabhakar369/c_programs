#include<stdio.h>
#include<Math.h>

//Iterative Approach
int binary_search_iter(int ele[],int key,int N)
{
    int low,mid,high;
    low = 0;
    high = N-1;
    while(low <= high)
    {
        mid = floor(low + (high-low)/2);
        if(key < ele[mid])
        {
            high = mid - 1;
        }
        else if(key > ele[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int binary_search_rec(int ele[],int key,int low, int high)
{
    int mid = floor(low + (high-low)/2);
    if(low > high)
    {
        return -1;
    }
    else if(key < ele[mid])
    {
        binary_search_rec(ele,key,low,mid-1);
    }
    else if(key > ele[mid])
    {
        binary_search_rec(ele,key,mid+1,high);
    }
    else
    {
        return mid;
    }
}

int main()
{
    int ele[] = {10,20,30,40,50,60,70,80,90,100};
    int key = 100,ret,n=10;
    //ret = binary_search_iter(ele,key,n);
    ret = binary_search_rec(ele,key,0,n-1);
    if(ret == -1)
    {
        printf("Element %d is not Found in Array\n",key);
    }
    else
    {
        printf("Element %d is found at index %d in Array\n",key,ret);
    }

    return 0;
}
