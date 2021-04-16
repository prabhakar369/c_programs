// C program to reverse a string using pointers

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* str_rev(char *p)
{
    char *temp;
    temp = (char*)malloc(sizeof(char) * strlen(p));
    int k=0;
    for(int i=strlen(p)-1;i>=0;i--)
    {
        temp[k++]=p[i];
    }
    temp[k] = '\0';
    return temp;
}

/*char * str_rev_rec(char *p)
{
    static int len = strlen(p);
    static char *temp = (char *)malloc(sizeof(char)*100);
    static int k=0;
    if(*p == '\0')
    {
        return;
    }
    str_rev_rec(p+1);
    temp[k++] = *p;
    if(strlen(temp) == len)
    {
        return temp;
    }
}*/ // Can work on this later

char* reverse(char *str)
{
    static int i = 0;
    static char rev[100];
    if(*str)
    {
        reverse(str+1);
        rev[i++] = *str;
    }
    return rev;
} //???

int main()
{
    char *p = "String";
    printf("The reverse of %s is %s",p,str_rev(p));
    printf("The reverse of %s is %s",p,reverse(p));
    return 0;
}
