#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer
{
    char name[50], phone[15];
    int bonus;
}z[500];

int main()
{
    FILE *fin;
    char a[100];
    if((fin = fopen("customer.txt", "r")) != NULL)
    {
        int i, flag = 0, k = 0;
        while(!feof(fin))
        {
            fgets(z[i].name, 100, fin);
            fflush(stdin);
            k++;
        }
    }
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("%s\n\n", z[i].name);
    }
}
