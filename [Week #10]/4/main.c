#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employees
{
    char name[50], dept[50];
    int id, salary;
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
            printf("\nEmployee's Name: ");
            gets(b[i].name);
            fflush(stdin);

            printf("Department of %s: ", b[i].name);
            gets(b[i].dept);
            fflush(stdin);

            printf("Salary of %s: ", b[i].name);
            scanf("%d", &b[i].salary);
            fflush(stdin);

            printf("ID of %s: ", b[i].name);
            scanf("%d", &b[i].id);
            fflush(stdin);
        }
        fgets(a, 100, inp);
        for(i = 0; i < 5; i++)
        {
            if(strcmp(a, b[i].dept) == 0)
            {
                fprintf(fout, "Employee Name: %s\n", b[i].name);
                fprintf(fout, "Department: %s\n", b[i].dept);
                fprintf(fout, "Salary: %d\n", b[i].salary);
                fprintf(fout, "ID: %d\n\n", b[i].id);
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
