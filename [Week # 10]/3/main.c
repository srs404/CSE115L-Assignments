#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct birds
{
    char name[50], kingdom[50], phylum[20];
    int index;
}b[3];


int main()
{
    int i, flag = 0;
    char a[100];
    FILE *inp;
    FILE *fout = fopen("output.txt", "w");
    if((inp = fopen("input.txt", "r")) != NULL)
    {

        fgets(a, 100, inp);
        for(i = 0; i < 3; i++)
        {
            printf("Bird Name: ");
            gets(b[i].name);
            fflush(stdin);

            printf("Kingdom of %s: ", b[i].name);
            gets(b[i].kingdom);
            fflush(stdin);

            printf("Phylum of %s: ", b[i].name);
            gets(b[i].phylum);
            fflush(stdin);

            printf("Index of %s: ", b[i].name);
            scanf("%d", &b[i].index);
            fflush(stdin);
        }



        for(i = 0; i < 3; i++)
        {
            if(strcmp(a, b[i].name) == 0)
            {
                fprintf(fout, "Bird Name: %s\n", b[i].name);
                fprintf(fout, "Kingdom: %s\n", b[i].kingdom);
                fprintf(fout, "Phylum: %s\n", b[i].phylum);
                fprintf(fout, "Index: %d\n", b[i].index);
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
