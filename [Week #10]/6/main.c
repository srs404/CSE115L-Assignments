#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bank
{
    char name[50], address[150];
    int phone, money;
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
            printf("\nAccount Holder's Name: ");
            gets(b[i].name);
            fflush(stdin);

            printf("Address of %s: ", b[i].name);
            gets(b[i].address);
            fflush(stdin);

            printf("Phone Number of %s: ", b[i].name);
            scanf("%d", &b[i].phone);
            fflush(stdin);

            printf("Money of %s: ", b[i].name);
            scanf("%d", &b[i].money);
            fflush(stdin);
        }
        fscanf(inp, "%d", &a);
        for(i = 0; i < 3; i++)
        {
            if(b[i].money >= a)
            {
                fprintf(fout, "Account Name: %s\n", b[i].name);
                fprintf(fout, "Address: %s\n", b[i].address);
                fprintf(fout, "Phone Number: %d\n", b[i].phone);
                fprintf(fout, "Money: %d\n\n", b[i].money);
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
