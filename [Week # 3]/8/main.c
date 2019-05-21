#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, r, c, i;
    printf("Enter Column: ");
    scanf("%d", &a);
    char b[a];
    for(r = a*2-2; r >= 1; r--)
    {
        for(c = 1; c <= r/2+1; c++)
        {
            b[c-1] = c+64;
            printf("%c", b[c-1]);
        }
        for(c = r; c >= a; c--)
        {
            printf("%c", b[c-a]);
        }
        printf("\n");
    }
    return 0;
}
