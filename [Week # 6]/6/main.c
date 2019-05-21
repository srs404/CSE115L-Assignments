#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5], i, j, b, deter = 0, k = 1, m = 0, l;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Enter the value of A [ %d%d ] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 1; i++)
    {
        for(j = 0; j < 5; j++)
        {
            for(l = 0; l < 5; l++, k++, m++)
            {
            if(j != m)
            {
                if(m % 2 == 0 && m < 5)
                {
                    b = a[i][j];
                    deter -= b*(a[k][m]);
                }
                else
                {
                    b = a[i][j];
                    deter -= b*(a[k][m]);
                }
            }
            }

            k = 1;
            m = 0;
        }
    }
    printf("%d", deter);
    return 0;
}
