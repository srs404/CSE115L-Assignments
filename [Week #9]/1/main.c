#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many Elements: ");
    scanf("%d", &n);
    int a[n];
    int i, *aptr = &a;

    for(i = 0; i < n; i++)
    {
        printf("Enter %dth Element: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\n\n");

    for(i = 0; i < n; i++)
    {
        printf("%dth Element: %d\n", i+1, *(aptr + i));
    }
}
