#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50], b[50];
    int i, d = 0, s = 0, alpha = 0, k = 0;
    printf(" Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
        {
            alpha++;
        }
        else if(a[i] >= 48 && a[i] <= 57)
        {
            d++;
            b[k] = a[i];
            k++;
        }
        else
        {
            s++;
        }
    }
    b[k] = '\0';
    printf("\n Number of Alphabets in String: %d\n\n Number of Digits in String: %d\n\n Number of Special Characters in String: %d\n", alpha, d, s);
    printf("\n Filtered String: %s\n\n", b);
    return 0;
}
