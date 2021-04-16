// C program that uses functions and structures to perform operations on complex numbers
// 1.Read a Complex Number
// 2.Write a Complex Number
// 3.Addition of Two Complex Numbers
// 4.Multiplication of Two Complex Numbers

#include<stdio.h>
#include<Math.h>
struct complex
{
    int a; // real
    int b; // imaginary
};
struct complex read_complex()
{
    struct complex c;
    printf("\nEnter Real Part: ");
    scanf("%d",&(c.a));
    printf("\nEnter Imaginary Part: ");
    scanf("%d",&(c.b));
    return c;
}
void write_complex(struct complex c)
{
    if(c.b == 0)
    {
        printf("\n%d",c.a);
    }
    else if (c.b < 0)
    {
        printf("\n%d - %di",c.a,abs(c.b));
    }
    else
    {
        printf("\n%d + %di",c.a,c.b);
    }
}
void add_complex(struct complex N1,struct complex N2)
{
    struct complex result;
    result.a = N1.a + N2.a;
    result.b = N1.b + N2.b;
    write_complex(result);
}
void mul_complex(struct complex N1,struct complex N2)
{
    struct complex result;
    result.a = (N1.a * N2.a) - (N1.b * N2.b);
    result.b = (N1.a * N2.b) + (N2.a * N1.b);
    write_complex(result);
}
int main()
{
    struct complex a = read_complex();
    struct complex b = read_complex();
    printf("The numbers read are:\n");
    write_complex(a);
    write_complex(b);
    int ch;
    printf("\n\n1.Add\n2.Mul\n:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
            add_complex(a,b);
            break;
    case 2:
            mul_complex(a,b);
            break;
    default:
            exit(0);
    }
    return 0;
}
