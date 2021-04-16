// C program for following string opertions without using built in functions
// -to concatenate two strings
// -to append a string to another string
// -to compare two strings

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void str_cat(char *a, char *b) //Iterative
{
    int comb_len = strlen(a) + strlen(b),i,k=0;
    for(i=strlen(a);i<comb_len;i++)
    {
        a[i] = b[k++];
    }
    a[i] = '\0';
}
void str_append(char *a, char *b) //Recursive
{
    (*a)? str_append(++a, b): (*a++ = *b++)? str_append(a, b): 0 ;
}
int str_cmp(char *a,char *b) //Recursive
{
    return (*a)?(*a++ == *b++)?str_cmp(a,b):(a>b)? a: b: 0;
}
int main()
{
    char a[50] = "Vijay";
    char b[50] = "Prabhakar";
    char c[50] = "Ogirala";
    char d[50] = "VijayPrabhakarOgirala";
    str_cat(a,b);
    printf("%s\n",a);
    str_append(a,c);
    printf("%s\n",a);
    if(str_cmp(a,d)==0)
    {
        printf("Both Strings are equal");
    }
    else
    {
        printf("Both String are not equal");
    }
    return 0;
}
