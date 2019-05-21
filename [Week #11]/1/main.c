#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f;
    printf("Enter Number: ");
    scanf("%d", &n);
    f = fact(n);
    printf("Factorial of %d is: %d", n, f);
}

int fact(int a)
{
    if(a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}
