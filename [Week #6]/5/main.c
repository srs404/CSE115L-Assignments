#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], b[3][3], m[3][3], i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Matrix A [ %d%d ] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Matrix B [ %d%d ] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
      printf("\n------------Matrix A---------------\n");

    for(i = 0; i < 3; i++)
    {
        printf("[ ");
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("]");
        printf("   ");
        if(i == 1)
        {

        }
        printf("\n");
    }
    printf("\n------------Matrix B---------------\n");

    for(i = 0; i < 3; i++)
    {
        printf("[ ");
        for(j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("]");
        printf("\n");
    }

    return 0;
}
