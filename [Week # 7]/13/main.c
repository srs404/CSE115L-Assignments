#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50], b[50];
    int i, v = 0, k = 0;
    printf("Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
        {
            if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            {
                v++;
            }
        }
        if(a[i] != ' ')
        {
            b[k] = a[i];
            k++;
        }
    }
    b[k] = '\0';
    printf(" Total Number of Vowels in String: %d\n Filtered String: ", v);
    if(v > 4)
    {
        printf("%s", b);
    }
    else if(v >= 0 && v <= 4)
    {
        printf("%s", a);
    }
}
