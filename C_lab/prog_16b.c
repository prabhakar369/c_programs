// C program to calculate the no of lines, and no of characters in a file

#include<stdio.h>
int main()
{
    FILE *file = fopen("file2.txt","r");
    char c;
    int chars=0,lines=0;
    while((c=fgetc(file))!=EOF)
    {
        chars++;
        if(c == '\n')
            lines++;
    }
    lines++; // counting the EOF as another line
    printf("The number of chars is %d and lines is %d",chars,lines);
    return 0;
}
