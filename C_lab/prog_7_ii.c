// C program to delete n character from a given position in a given string

#include<stdio.h>
#include<string.h>
char* delStringIter(char *string,int start,int numofchars)
{
    int outputstringlen = strlen(string) - numofchars;
    char *outputstring = (char *)malloc(sizeof(char) * outputstringlen);
    int i,k=0;
    if(start < 0)
        start = strlen(string) + start + 1;
    for(i=0;i<strlen(string);i++)
    {
        if(i == start && numofchars > 0)
        {
            start++;
            numofchars--;
            continue;
        }
        outputstring[k++] = string[i];
    }
    outputstring[k] = '\0';
    return outputstring;
}

char* delStringRec(char *string,int start,int numofchars)   //Need to Work on this
{

    return NULL;
}
int main()
{
    char string[] = "GivenString is a Nameblahblahblah";
    printf("The result is %s",delStringIter(string,-2,1));
    //printf("The result is %s",delStringRec(string,-2,1));
    return 0;
}
