#include<stdio.h>
#include<math.h>
int main()
{
    int num = 16;
    float sqrt;
    sqrt = pow(2, 0.5 * log2(num));
    printf("Square root of %d is %f", num, sqrt);
    return 0;
}
