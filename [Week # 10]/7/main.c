#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct countries
{
    char name[50], cap[20], cur[20];
    int pop;
}b[3];


int main()
{
    int i, flag = 0;
    int a;
    FILE *inp;
    FILE *fout = fopen("output.txt", "w");
    if((inp = fopen("input.txt", "r")) != NULL)
    {
        for(i = 0; i < 3; i++)
        {
            printf("\nCountry Name: ");
            gets(b[i].name);
            fflush(stdin);

            printf("Capital of %s: ", b[i].name);
            gets(b[i].cap);
            fflush(stdin);

            printf("Population of %s: ", b[i].name);
            scanf("%d", &b[i].pop);
            fflush(stdin);

            printf("Currency of %s: ", b[i].name);
            gets(b[i].cur);
            fflush(stdin);
        }
        fscanf(inp, "%d", &a);
        for(i = 0; i < 3; i++)
        {
            if(b[i].pop >= a)
            {
                fprintf(fout, "Country Name: %s\n", b[i].name);
                fprintf(fout, "Capital: %s\n", b[i].cap);
                fprintf(fout, "Population: %d\n", b[i].pop);
                fprintf(fout, "Currency: %d\n\n", b[i].cur);
                flag = 1;
            }
        }
    }
    if(flag == 0)
    {
        fprintf(fout, "Not Found!");
    }

    fclose(inp);
    fclose(fout);
}
