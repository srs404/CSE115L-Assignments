#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, i1 = 0;
    printf("How many Number: ");
    scanf("%d", &n);
    int a[n], b[n];
    for(i = 0; i < n; i++)
    {
        printf("%dth Number: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Reversed Array: ");
    for(i = n; i > 0; i--, i1++)
    {
        b[i1] = a[i - 1];
        printf("%d ", b[i1]);
    }
    return 0;
}
