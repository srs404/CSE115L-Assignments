#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, n = 1, s = 0;
    printf("Enter Value of n: ");
    scanf("%d", &a);
    for(i = 0; i < a; i++)
    {
        s = s + (1/n);
        n++;
    }
    printf("Series is: %d", s);
}
