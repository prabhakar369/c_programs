// C program for the string operations
// find the length of string
// to find whether a given string is palindrome or not

#include<stdio.h>
int str_len(char *a)    //Recursive
{
    if(*a == '\0')
        return 0;
    return 1 + str_len(a+1);
}
char* str_rev(char *a)
{
    int len = str_len(a),i,k=0;
    char *out = (char *)malloc(sizeof(char)*len);
    for(i=len-1;i>=0;i--)
    {
        out[k++] = a[i];
    }
    out[k] = '\0';
    return out;
}
int str_cmp(char *a,char *b)
{
 return (*a)?(*a++ == *b++)?str_cmp(a,b):(a>b)?a:b:0;
}
int main()
{
    char a[] = "ab";
    printf("The length is %d",str_len(a));
    //printf("\nThe reverse if %s", str_rev(a));
    if(str_cmp(a,str_rev(a)) == 0)
        printf("\nThe string is palindrome");
    else
        printf("\nThe string is not a palindrome");
    return 0;
}
