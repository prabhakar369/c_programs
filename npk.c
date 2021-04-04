#include<stdio.h>
#define N 1024
int A[N],c = 0; //implement with hashset
int kill()
{
    do
    {
        c = (c + 1)%N;
    }
    while(A[c] != 0);
    //printf("%d ",c);
    return c;
}
int main()
{
    int alive = N;
    while(alive > 1)
    {
        A[kill()] = 1;
        kill(); // handknife
        alive--;
    }
    printf("The last alive person is %d\n",kill()+1);
}
