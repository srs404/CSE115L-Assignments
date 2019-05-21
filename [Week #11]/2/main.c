#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum;
    printf("Max Number: ");
    scanf("%d", &n);
    if(n >= 0)
    {
        sum = natsum(n);
        printf("Sum of Natural Numbers Upto %d is: %d", n, sum);
    }
    else
    {
        printf("Max Value is not Natural Number!");
    }
}

int natsum(int a)
{
    if(a > 0)
    {
        return a + natsum(a - 1);
    }
}
