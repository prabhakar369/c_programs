// Find 2's complement of a binary number

#include<stdio.h>
#include<string.h>
int main()
{
    char bn[] = "0000000000"; //Took binary number as string
    char bn2[strlen(bn)+1],carry ='0';
    int i,k=0;

    //Perform 1's complement
    for(i = 0; i< strlen(bn) ; i++)
    {
        if(bn[i] == '0')
        {
            bn2[i] = '1';
        }
        else{
            bn2[i] = '0';
        }
    }
    bn2[i] = '\0';
    printf("1's Complement of %s is %s\n",bn, bn2);

    //Adding 1 to LSB - right most bit
    for(i = strlen(bn2)-1; i >=0; i--)
    {
        if(bn2[i] == '0')
        {
            if(i == strlen(bn2)-1)
            {
            bn2[i] = '1';
            break;
            }
            else
            {
                if(carry == '1')
                {
                    bn2[i] = '1';
                    carry = '0';
                }
            }
        }
        else
        {
            if(i == strlen(bn2)-1)
            {
            bn2[i] = '0';
            carry = '1';
            }
            else
            {
                if(carry == '1')
                {
                    bn2[i] = '0';
                    carry = '1';
                }
            }
        }
    }

    if(carry == '1')    //If final carry is 1, shift all the bits to next position and add the carry at MSB - leftmost
    {
      k=strlen(bn2);
      while(k>0)    // shifting
      {
          bn2[k+1] = bn2[k];
          k--;
      }
      bn2[k] = carry;
    }

    printf("2's Complement is %s", bn2);

    return 0;
}
