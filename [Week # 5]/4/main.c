#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, grt = 0, sml = 0;
    printf("How many Numbers: ");
    scanf("%d", &n);
    int a[n];
    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("%dth Number: ", i+1);
        scanf("%d", &a[i]);
        if(grt < a[i])
        {
            grt = a[i];
            sml = a[i];
        }
    }
    for(i = 0; i < n; i++)
    {
        if(sml > a[i])
        {
            sml = a[i];
        }
    }
    printf("\nLargest: %d and Smallest: %d", grt, sml);
    return 0;
}
