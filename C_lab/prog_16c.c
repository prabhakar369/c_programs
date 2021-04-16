// C program to merge two files a third file. The names of the files must be entered using command line arguments

#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *file1,*file2,*file3;
    file1 = fopen(argv[1],"r");
    file2 = fopen(argv[2],"r");
    char c;
    file3 = fopen(argv[3],"w");
    while((c=fgetc(file1))!=EOF) //Copying file1 to file3
    {
        fputc(c,file3);
    }
    fputc('\n',file3);
    fclose(file1);
    while((c=fgetc(file2))!=EOF) //Copying file2 to file3
    {
        fputc(c,file3);
    }
    fclose(file2);
    printf("New file %s created merging files %s and %s!",argv[3],argv[1],argv[2]);
    fclose(file3);
    return 0;
}
