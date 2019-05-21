#include <stdio.h>
#include <string.h>
#include <conio.h>

struct info
{
    char name[50], depart[50], course[8];
    int roll, year;
}stu[50];

int total = 3;

int main()
{
    //--------------------------Demo Informations--------------------------------------

    //student 1 Info
    strcpy(stu[0].name, "MD. Samiur Rahman Mian");
    strcpy(stu[0].depart, "Computer Science & Engineering [CSE]");
    strcpy(stu[0].course, "CSE115");
    stu[0].roll = 1111;
    stu[0].year = 2018;
    //Student 2 Info
    strcpy(stu[1].name, "Soaib Ahmed");
    strcpy(stu[1].depart, "Electrical and Electronics Engineering [EEE]");
    strcpy(stu[1].course, "EEE141");
    stu[1].roll = 2222;
    stu[1].year = 2017;
    //Student 3 Info
    strcpy(stu[2].name, "Tarif Shariar Arnob");
    strcpy(stu[2].depart, "LAW [LLB]");
    strcpy(stu[2].course, "POL104");
    stu[2].roll = 3333;
    stu[2].year = 2016;

    //---------------------------------------------------------------------------------


    system("cls");
    int n;
    printf("<--------------Total Students: %d----------->\n\n\n", total);
    printf("1. Enter Student's Info");
    printf("\n2. Search Student's Info");
    printf("\n3. Get Students Info via Year");
    printf("\n\nChoose: ");
    scanf("%d", &n);
    system("cls");
    if(n == 1)
    {
        inputname();
    }
    else if(n == 2)
    {
        searchname();
    }
    else if(n == 3)
    {
        searchyear();
    }
    else
    {
        printf("There's no option for that!");
    }
}

void inputname()
{
    int i, n;
    for(i = total; n != 0; i++)
    {
        printf("<--------------Total Students: %d----------->\n", total);
        printf("### Input Student ####\n\n\n");
        printf("Student's Name: ");
        scanf("%s", stu[i].name);
        printf("Student's Department: ");
        scanf("%s", stu[i].depart);
        printf("Student's Course: ");
        scanf("%s", stu[i].course);
        printf("Student's Roll: ");
        scanf("%d", &stu[i].roll);
        printf("Student's Year of Joining: ");
        scanf("%d", &stu[i].year);
        printf("\n--------------------------------------------\nWant to add more? [Yes = 1/No = 0]: ");
        scanf("%d", &n);
        system("cls");
        total++;
    }
    main();
}

void searchname()
{
    int n, i, flag;
    printf("<--------------Total Students: %d----------->\n", total);
    printf("### Search Student ####\n\n\n");
    printf("Enter Roll: ");
    scanf("%d", &n);
    for(i = 0; i < total; i++)
    {
        if(stu[i].roll == n)
        {
            flag = 1;
            system("cls");
            printf("<---------------Student Found!--------------------->\n\n\n");
            printf("Student's Name: %s", stu[i].name);
            printf("\nStudent's Roll: %d", stu[i].roll);
            printf("\nStudent's Department: %s", stu[i].depart);
            printf("\nStudent's Course: %s", stu[i].course);
            printf("\nStudent's Joining Year: %d", stu[i].year);
            break;
        }
    }
    if(flag != 1)
    {
        printf("\n\n### Student's Information Not Found! ###");
    }
    getch();
    main();
}

void searchyear()
{
    int n, i, flag;
    printf("<--------------Total Students: %d----------->\n", total);
    printf("### Students From Same Year ####\n\n\n");
    printf("Enter Year: ");
    scanf("%d", &n);
    system("cls");
    for(i = 0; i < total; i++)
    {
        if(stu[i].year == n)
        {
            if(flag != 1)
            {
                printf("<---------------Students of %d--------------------->\n\n\n", n);
            }
            flag = 1;
            printf("Student's Name: %s", stu[i].name);
            printf("\nStudent's Roll: %d", stu[i].roll);
            printf("\nStudent's Department: %s", stu[i].depart);
            printf("\nStudent's Course: %s", stu[i].course);
            printf("\nStudent's Joining Year: %d\n\n", stu[i].year);
            printf("||--------------------------------------------------||\n\n");
        }
    }
    if(flag != 1)
    {
        printf("\nThere are no students of %d", n);
    }
    getch();
    main();
}
