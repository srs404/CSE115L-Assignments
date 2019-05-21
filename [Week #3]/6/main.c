#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;
    for(a = 1; a <= 300; a++)
    {
        b = 0;
        for (i = 2; i <= a/2; i++)
        {
            if(a%i == 0)
            {
                b++;
                break;
            }
        }
        if(b == 0 && a != 1 )
        {
            printf("Prime Number: %d\n", a);
        }
    }
}
