#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows & columns of Matrix: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter Element a%d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
