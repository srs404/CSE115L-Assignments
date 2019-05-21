#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter Number: ");
    scanf("%d", &a);
    for(b = 1; b <= a; b++)
    {
        for(c = 1; c <= a-b; c++)
        {
            printf(" ");
        }
        for(c = 1; c <= 2*b-1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(b = a-1; b >= 1; b--)
    {
        for(c = 1; c <= a-b; c++)
        {
            printf(" ");
        }
        for(c = 1; c <= 2*b-1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
