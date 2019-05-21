#include <stdio.h>
#include <string.h>
#include <conio.h>

struct employee
{
    char name[50];
    int code, year;
}emp[50];

int main()
{
    int total = 4;
    demomember();
    options(total);
}

void options(int total)
{
    system("cls");
    int n;
    printf("<--------------Total Employees: %d----------->\n\n\n", total);
    printf("1. Enter Employee's Info");
    printf("\n2. Check Tenure");
    printf("\n\nChoose: ");
    scanf("%d", &n);
    system("cls");
    if(n == 1)
    {
        inputname(total);
    }
    else if(n == 2)
    {
        searchyear(total);
    }
    else
    {
        printf("There's no option for that!");
    }
}

void inputname(int total)
{
    int i, j, n, r;
    for(i = total; r != 0; i++)
    {
        system("cls");
        printf("<--------------Total Employees: %d----------->\n", total);
        printf("### Add New Employee ####\n\n\n");
        printf("Employee's Name: ");
        scanf("%s", emp[i].name);
        printf("%s's Code: ", emp[i].name);
        scanf("%d", &emp[i].code);
        printf("%s's Year of Joining: ", emp[i].name);
        scanf("%d", &emp[i].year);
        printf("\n--------------------------------------------\nWant to add more? [Yes = 1/No = 0]: ");
        scanf("%d", &r);
        total++;
    }
    getch();
    options(total);
}

void searchyear(int total)
{
    int i, j, yr, n;
    int flag = 0;
    printf("<--------------Total Employees: %d----------->\n", total);
    printf("### Employee Tenure ####\n\n\n");
    printf("Enter Current Year [Ex. 2018] : ");
    scanf("%d", &n);
    system("cls");

    for(i = 0; i < total; i++)
    {
        if(emp[i].year <= n-3)
        {
            printf("<------------------Tenure Above 3 Years-------------------->\n\n\n");
            yr = n - emp[i].year;
            printf("Employee Name: %s\n\n", emp[i].name);
            printf("Employee Code: %d\n\n", emp[i].code);
            printf("Employee Working Years: %d\n\n", yr);
            printf("<---------------------------------------------------------->\n\n");
        }
    }
    getch();
    options(total);
}

void demomember()
{
    //--------------------------Demo Informations--------------------------------------

    //Employee 1 Info
    strcpy(emp[0].name, "MD. Samiur Rahman Mian");
    emp[0].code = 1831;
    emp[0].year = 2016;
    //Employee 2 Info
    strcpy(emp[1].name, "Soaib Ahmed");
    emp[1].code = 2562;
    emp[1].year = 2013;
    //Employee 3 Info
    strcpy(emp[2].name, "Tarif Shariar Arnob");
    emp[2].code = 3945;
    emp[2].year = 2015;
    //Employee 4 Info
    strcpy(emp[3].name, "Jubair Dihan");
    emp[3].code = 5655;
    emp[3].year = 2010;

    //---------------------------------------------------------------------------------
}
