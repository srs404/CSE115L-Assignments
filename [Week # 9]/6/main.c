#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("How Many Elements: ");
    scanf("%d", &n);

    int a[n], i;

    printf("\n\n");

    for(i = 0; i < n; i++)
    {
        printf("%dth Element: ", i+1);
        scanf("%d", &a[i]);
    }

    rev(&a, &n);
}

void rev(int *a, int *n)
{
    int i;
    printf("\n\nReversed Array: ");
    for(i = *n-1; i >= 0; i--)
    {
        printf("%d ", *(a+i));
    }
    printf("\n\n");
}
