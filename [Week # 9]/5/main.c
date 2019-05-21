#include <stdio.h>
#include <stdlib.h>
void countvc(char *a, int *v, int *c);

int main()
{
    char a[50];
    int v = 0, c = 0;

    printf("Enter String: ");
    gets(a);

    countvc(&a, &v, &c);

    printf("\n\nVowels: %d\nConsonants: %d\n\n", v, c);
}

void countvc(char *a, int *v, int *c)
{
    int i;
    for(i = 0; *(a+i) != '\0'; i++)
    {
        if(*(a+i) >= 'A' && *(a+i) <= 'Z' || *(a+i) >= 'a' && *(a+i) <= 'z')
        {
            if(*(a+i) == 'A' || *(a+i) == 'E' || *(a+i) == 'I' || *(a+i) == 'O' || *(a+i) == 'U' || *(a+i) == 'a' || *(a+i) == 'e' || *(a+i) == 'i' || *(a+i) == 'o' || *(a+i) == 'u')
            {
                *v = *v + 1;
            }
            else
            {
                *c = *c + 1;
            }
        }
    }
}
