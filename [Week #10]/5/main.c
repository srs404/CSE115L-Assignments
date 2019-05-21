#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students
{
    char name[50], dept[50];
    int roll;
}b[5];


int main()
{
    int i, flag = 0;
    char a[100];
    FILE *inp;
    FILE *fout = fopen("output.txt", "w");
    if((inp = fopen("input.txt", "r")) != NULL)
    {
        for(i = 0; i < 5; i++)
        {
            printf("\nStudent Name: ");
            gets(b[i].name);
            fflush(stdin);

            printf("Department of %s: ", b[i].name);
            gets(b[i].dept);
            fflush(stdin);

            printf("Roll of %s: ", b[i].name);
            scanf("%d", &b[i].roll);
            fflush(stdin);
        }
        fgets(a, 100, inp);
        for(i = 0; i < 5; i++)
        {
            if(strcmp(a, b[i].dept) == 0)
            {
                fprintf(fout, "Student Name: %s\n", b[i].name);
                fprintf(fout, "Department: %s\n", b[i].dept);
                fprintf(fout, "Roll: %d\n\n", b[i].roll);
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
