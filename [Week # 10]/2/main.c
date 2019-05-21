#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books
{
    char name[50], auth[50], sub[20];
    int id;
}b[3];

int main()
{
    int i, flag = 0;
    char a[100];
    FILE *inp;
    FILE *fout = fopen("output.txt", "w");
    if((inp = fopen("inp.txt", "r")) != NULL)
    {
        fgets(a, 100, inp);
        for(i = 0; i < 3; i++)
        {
            printf("Book Name: ");
            gets(b[i].name);
            fflush(stdin);

            printf("Author Name: ");
            gets(b[i].auth);
            fflush(stdin);

            printf("Subject of Book: ");
            gets(b[i].sub);
            fflush(stdin);

            printf("Book ID: ");
            scanf("%d", &b[i].id);
            fflush(stdin);
        }
        for(i = 0; i < 3; i++)
        {
            if(strcmp(a, b[i].name) == 0)
            {
                fprintf(fout, "Book Name: %s\n", b[i].name);
                fprintf(fout, "Author Name: %s\n", b[i].auth);
                fprintf(fout, "Subject of Book: %s\n", b[i].sub);
                fprintf(fout, "Book ID: %d\n", b[i].id);
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
