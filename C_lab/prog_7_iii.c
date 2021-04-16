// C program to replace a character from a string either from beginning or ending or at index

#include<stdio.h>
char* replaceCharAt(char* string,char ch,int index)
{
    string[index] = ch;
    return string;
}
char* replaceCharFirst(char* string,char begin,char ch)
{
    int i;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i] == begin)
        {
            string[i] = ch;
            break;
        }
    }
    return string;
}
char* replaceCharLast(char* string,char begin,char ch)
{
    int i;
    for(i=strlen(string)-1;i>=0;i--)
    {
        if(string[i] == begin)
        {
            string[i] = ch;
            break;
        }
    }
    return string;
}
char* replaceCharAll(char* string,char begin,char ch)
{
    int i;
    for(i=strlen(string)-1;i>=0;i--)
    {
        if(string[i] == begin)
        {
            string[i] = ch;
        }
    }
    return string;
}
char* insertStringIter(char *string,char *substring, int index)
{
  int combinedlength = strlen(string) + strlen(substring);
  char *out = (char *)malloc(sizeof(char)*combinedlength);
  int i,k=0,index_s = 0,index_sub = 0;
  if(index < 0)
    index = index + strlen(string) + 1;
   while(k < combinedlength)
   {
       if(k == index && index_sub < strlen(substring))
       {
            out[k] = substring[index_sub++];
            index++;
       }
       else if(index_s < strlen(string))
       {
            out[k] = string[index_s++];
       }
       k++;
   }
   out[k] = '\0';
   return out;
}
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
char* replaceAll(char *string,char *src,char *rep)
{
    int i,srcp=0,match=0;
    for(i=0;i<strlen(string);i++)
    {
        if(string[i] == src[srcp])
        {
            match++;
            if(match == strlen(src))
            {
                string = delStringIter(string,i - strlen(src) + 1,strlen(src));
                string = insertStringIter(string,rep,i-strlen(src) + 1);
                //return string;
                match = 0;
                srcp = 0;
            }
            srcp++;
        }
        else
        {
            srcp = 0;
            match = 0;
            continue;
        }
    }
    return string;
}
int main()
{
    char string[] = "runnerwinnerkeeperdhonirunnerwinnerkeeperdhoni";
    printf("The result string is %s",replaceCharAt(string,'r',0));
    printf("\nThe result string is %s",replaceCharFirst(string,'.',';'));
    printf("\nThe result string is %s",replaceCharLast(string,';','?'));
    printf("\nThe result string is %s",replaceCharAll(string,'?','!'));
    printf("\nThe result string is %s",replaceAll(string,"runner","temper"));
    printf("\nThe result string is %s",replaceAll(string,"dhoni","msdhoni"));
    return 0;
}
