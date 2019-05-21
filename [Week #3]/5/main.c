#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, p = 0, n = 0, z = 0;
    while(a != 007)
    {
        printf("\nTo exit type 007\n");
        printf("Enter number: ");
        scanf("%d", &a);
        if(a == 007)
        {
            break;
        }
        else if(a == 0)
        {
            z++;
        }
        else if(a > 0)
        {
            p++;
        }
        else if(a < 0)
        {
            n++;
        }
    }
    printf("\nPositive Numbers: %d", p);
    printf("\nNegative Numbers: %d", n);
    printf("\nZero Numbers: %d", z);
    return 0;
}
