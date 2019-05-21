#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5], i, j, sml, sml1, grt = 0, grt1 = 0;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Enter value of A[%d%d]:  ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(grt < a[i][j]);
            {
                grt = a[i][j];
                sml = a[i][j];
            }
        }

        if(grt1 <= grt)
        {
            grt1 = grt;
        }

        for(j = 0; j < 5; j++)
        {
            if(sml > a[i][j])
            {
                sml = a[i][j];
            }
        }

        if(sml1 >= sml)
        {
            sml1 = sml;
        }

    }
    printf("Largest Number: %d AND Smallest Number: %d", grt1, sml1);
    return 0;
}
