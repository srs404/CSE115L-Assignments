#include <stdio.h>

int main()
{
    int a[6][6], b[6][6], i, j;
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 6; j++)
        {
            printf("Enter Value of Matrix A [ %d%d ] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 6; j++)
        {
            printf("Enter Value of Matrix B[ %d%d ] :", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n------------Matrix A---------------\n");

    for(i = 0; i < 6; i++)
    {
        printf("[ ");
        for(j = 0; j < 6; j++)
        {
            printf("%d    ", a[i][j]);
        }
        printf(" ]");
        printf("\n");
    }
    printf("\n------------Matrix B---------------\n");

    for(i = 0; i < 6; i++)
    {
        printf("[ ");
        for(j = 0; j < 6; j++)
        {
            printf("%d    ", b[i][j]);
        }
        printf(" ]");
        printf("\n");
    }
    return 0;
}
