// C program to insert a sub-string in to given main string from a given position

#include<stdio.h>
#include<string.h>
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
char* insertStringRec(char *string,char *substring, int index)  //Need to work on this.
{
    return NULL;
}
int main()
{
    char string[] = "Computer is amazing";
    char substring[] = " programming";

    printf("Output is %s",insertStringIter(string,substring,-3));
    //printf("Output is %s",insertStringRec(string,substring,9));
    return 0;
}
