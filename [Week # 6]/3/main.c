#include <stdio.h>

int main()
{
    int a[4][4], b[4][4], i, j, k = 0;
    for(i = 0; i < 4; i++, k++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("A [%d%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        for(j = 0; j < 4; j++)
        {
            b[j][k] = a[i][j];
        }
    }
    printf("\nOriginal A Matrix: \n");
    for(i=0; i < 4; i++)
    {
        printf("[");
        for(j = 0; j < 4; j++)
        {
            printf("%   d   ", a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("\nTranspose Matrix of A: \n");
    for(i=0; i < 4; i++)
    {
        printf("[");
        for(j = 0; j < 4; j++)
        {
            printf("   %d   ", b[i][j]);
        }
        printf("]");
        printf("\n");
    }
    return 0;
}
