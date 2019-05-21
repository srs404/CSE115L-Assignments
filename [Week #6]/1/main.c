#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("How many Rows: ");
    scanf("%d", &n);
    printf("How many Columns: ");
    scanf("%d", &m);
    int a[n][m], i, j, sum = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("Enter Value of A[%d%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(j == 0 && i != 0 && i != n-1)
            {
                sum += a[i][j];
            }
            else if(j == m-1 && i != 0 && i != n-1)
            {
                sum += a[i][j];
            }

            if (i == 0)
            {
                sum += a[i][j];
            }
            else if(i == n-1)
            {
                sum += a[i][j];
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("[ ");
        for(j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("\nSum of elements in the border of your Array is: %d\n", sum);
    return 0;
}
