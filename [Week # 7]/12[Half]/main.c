#include <stdio.h>

int main()
{
    char a[50];
    int i, l = 0, large = 0, lstart, s = 1;
    printf("Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] != ' ')
        {
            l++;
        }
        else if(a[i] == ' ')
        {
            l = 0;
        }
        if(large <= l)
        {
            large = l;
            lstart = s - large;
        }
        s++;
    }
    printf("\nLargest Word is: ");
    for(i = lstart; a[i] != ' '; i++)
    {
        if(i <= lstart + large)
        {
            printf("%c", a[i]);
            if(a[i] >= 97 && a[i] <= 122)
            {
                a[i] = a[i] - 32;
            }
        }

    }
    printf("\n");
    printf("\nFiltered String: %s", a);
}
