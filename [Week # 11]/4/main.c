#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, gcd;

    printf("Enter Positive Integer: ");
    scanf("%d", &a);

    printf("Enter 2nd Positive Integer: ");
    scanf("%d", &b);

    gcd = gcdcheck(a, b);
    printf("GCD: %d", gcd);
}

int gcdcheck(int a, int b)
{
    if(a != b)
    {
        if(a > b)
        {
            return gcdcheck(a - b, b);
        }
        else
        {
            return gcdcheck(a, b - a);
        }
    }
    return a;
}
