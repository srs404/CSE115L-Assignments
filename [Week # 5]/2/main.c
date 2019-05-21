#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[15], i, evn = 0, odd = 0, ps = 0, ng = 0, zero = 0;
    for(i = 0; i < 15; i++)
    {
        printf("%dth Number: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 15; i++)
    {
        if(a[i]%2 == 0)
        {
            evn++;
        }
        else if(a[i]%2 == 1)
        {
            odd++;
        }
        if(a[i]>0)
        {
            ps++;
        }
        else if(a[i]<0)
        {
            ng++;
        }
        else if(a[i] == 0)
        {
            zero++;
        }
    }
    printf("\nPositive Numbers in Array: %d times\n", ps);
    printf("\nNegative Numbers in Array: %d times\n", ng);
    printf("\nEven Numbers in Array: %d times\n", evn);
    printf("\nOdd Numbers in Array: %d times\n", odd);
    printf("\nZero in Array: %d times\n", zero);
    return 0;
}
