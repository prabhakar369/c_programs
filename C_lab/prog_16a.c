// C program that copies one file to another file

#include<stdio.h>
int main()
{
    FILE *file1,*file2;
    char c;
    file1 = fopen("file1.txt","r");
    file2 = fopen("file2.txt","w");
    while((c=fgetc(file1)) != EOF)
    {
        if(fputc(c,file2) == EOF)
        {
            printf("Error copying content to file !!\n");
            exit(0);
        }
    }
    printf("Content copied!");
    fclose(file1);
    fclose(file2);
    return 0;
}
