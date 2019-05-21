#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fact = 1;

    printf("Enter Number: ");
    scanf("%d", &n);

    factorial(&n, &fact);

    printf("Factorial Value of %d is: %d", n, fact);
}

void factorial(int *n, int *fact)
{
    int i;
    for(i = *n; i > 0; i--)
    {
        *fact = *fact * i;
    }
}
