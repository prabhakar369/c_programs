// Interchange Largest and Smallest in the Array

#include<stdio.h>
int main()
{
    int Arr[] = {10,23,64,9,2,3,4,5,1,7};   //Numbers can't repeat especially the min and max numbers
    int n = sizeof(Arr)/sizeof(int),i; // length of integer array
    int min = Arr[0], max = Arr[0],minindex,maxindex;

    //print the initial array
    printf("Before swap:\n");
    for(i = 0;i < n ;i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        if(Arr[i]<min)  //calculate min and store minindex
        {
            min = Arr[i];
            minindex = i;
        }
        if(Arr[i] > max)    //calculate max and store maxindex
        {
         max = Arr[i];
         maxindex = i;
        }
    }

    //Swap min and max
    Arr[maxindex] = (Arr[maxindex] + Arr[minindex]) - (Arr[minindex] = Arr[maxindex]);

    printf("After swap:\n");
    //print the modified array
    for(i = 0;i < n ;i++)
    {
        printf("%d ", Arr[i]);
    }
    return 0;
}
