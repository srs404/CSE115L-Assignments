#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    int i, v = 0, c = 0;
    printf("Enter String: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
        {
            if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            {
                v++;
                a[i] = a[i] + 32;
            }
            else if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            {
                v++;
                a[i] = a[i] - 32;
            }
            else
            {
                c++;
            }
        }
    }
    printf("\nTotal Vowels: %d\n\nTotal Consonants: %d\n\nFiltered String: %s\n\n", v, c, a);
}
