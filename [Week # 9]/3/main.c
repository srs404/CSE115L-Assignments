#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter 1st Element: ");
    scanf("%d", &a);

    printf("Enter 2nd Element: ");
    scanf("%d", &b);

    printf("\n=== Before Swap Function ===\n\n");
    printf("1st Element: %d\n2nd Element: %d\n", a, b);

    swap(&a, &b);

    printf("\n=== After Swap Function ===\n\n");
    printf("1st Element: %d\n2nd Element: %d\n\n", a, b);
}

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
