// Perform Matrix addition
#include<stdio.h>
int main()
{
    int mat1[50][50], mat2[50][50], m,n, p,q, i,j;
    printf("Enter mat1 size: \n");
    scanf("%d%d",&m,&n);
    printf("Enter mat2 size: \n");
    scanf("%d%d",&p,&q);


    printf("Enter elements for mat1: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter elements for mat2: \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    if(m == p && n == q)
    {
        printf("Addition is compatible!\n");
        //perform addition
        printf("Result of addition of mat1 and mat2: \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%3d ",mat1[i][j]+mat2[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("Addition Not possible. Exiting!\n");
        exit(0);
    }

    if(n == p)
    {
        printf("Multiplication is compatible!\n");

        //perform multiplication
        printf("Result of multiplication of mat2 and mat2: \n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%3d ", mat1[i][j] * mat2[j][i]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication Not possible. Exiting!\n");
        exit(0);
    }

    return 0;
}
