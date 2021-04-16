//  C program to illustrate the use of structure,union and other predefined datatypes

#include<stdio.h>

struct type1
{
    int a;
    char b;
};

union type2
{
    int rno;
    char name[10];
};

enum WEEK {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    struct type1 str1;
    union type2 str2;

    typedef struct type1 TYPE1;

    str1.a = 10;
    str1.b = 'P';

    printf("Values %d and %c are stored in the struct\n",str1.a,str1.b);

    str2.rno = 10;

    printf("Value rno %d is stored in union\n",str2.rno);

    str2.name[0] = 'N';
    str2.name[1] = 'A';
    str2.name[2] = 'M';
    str2.name[3] = 'E';
    str2.name[4] = '\0';

    printf("Value of name %s is stored in union\n",str2.name);

    printf("If I try to print rno %d now garbage gets printed, as size is distributed in union\n",str2.rno);

    printf("FRIDAY comes %d of the week\n",FRIDAY);

    TYPE1 str3;

    str3.a = 100;
    str3.b = 'Q';

    printf("New strtype is created and values %d and %c are stored\n",str3.a,str3.b);
    return 0;
}
