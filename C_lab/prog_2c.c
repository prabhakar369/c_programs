// Calculator using switch

#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    printf("Enter the operation to perform\n1.Add - Click '+'\n2.Sub - Click '-'\n3.Mul - Click '*'\n4.Div - Click '/'\n5.Mod - Click '%%'\n:");
    scanf("%c",&op);
    printf("Enter two operands:\n");
    scanf("%d%d",&a,&b);

    switch(op)
    {

    case '+':
            printf("%d %c %d =  %d",a,op,b,a + b);
            break;
    case '-':
            printf("%d %c %d =  %d",a,op,b,a - b);
            break;
    case '*':
            printf("%d %c %d =  %d",a,op,b,a * b);
            break;
    case '/':
            printf("%d %c %d =  %d",a,op,b,a / b);
            break;
    case '%':
            printf("%d %c %d =  %d",a,op,b,a % b);
            break;
    default:
            printf("Invalid Operator. Exiting!");
    }
    return 0;
}
