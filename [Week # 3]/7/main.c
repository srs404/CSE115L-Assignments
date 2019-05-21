#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, r, c, b = 1, n = 0, n1, r1;
    printf("Enter Column: ");
    scanf("%d", &a);
    r1 = a;
    for(r = 0; r < a; r++)
    {
        for(c = 1; c < r1; b++, c++)
        {
            printf("%c", b+64);
        }
        for(n1 = 0; n1 < n; n1++)
        {
            printf(" ");
        }
        for(c = 1; c < r1; c++, b--)
        {
            printf("%c", b+64);
        }
        printf("\n");
        b = 1;
        n++;
        r1--;
    }
    /*
    for(r = 2; r <= a; r++)
    {
        for(c = 1; c <= r; c++)
        {
            printf("%c", c+64);
        }
        printf("\n");
    }
    */
    return 0;
}
