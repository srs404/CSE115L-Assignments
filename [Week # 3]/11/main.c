#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b, c, r;
    printf("Enter Rows: ");
    scanf("%d",&r);
    for(c = 1; c <= r; ++c, a=0)
    {
        for(b = 1; b <= r-c; ++b)
        {
            printf("  ");
        }

        while(a != 2*c-1)
        {
            printf("* ");
            ++a;
        }

        printf("\n");
    }
}
