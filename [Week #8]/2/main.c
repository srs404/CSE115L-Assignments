#include <stdio.h>
#include <string.h>
#include <conio.h>
void demomembers();
void inputname();
void myacc();
void balance();

struct info
{
    char name[50];
    int accnum, accbal;
}bank[50];

int total = 4, flag = 0;

int main()
{

    if(flag != 1)
    {
        demomembers();
        flag = 1;
    }


    system("cls");
    int n;
    printf("<--------------Total Members: %d----------->\n\n\n", total);
    printf("1. New Member");
    printf("\n2. My Account");
    printf("\n3. Search Members via Balance");
    printf("\n\nChoose: ");
    scanf("%d", &n);
    system("cls");
    if(n == 1)
    {
        inputname();
    }
    else if(n == 2)
    {
        myacc();
    }
    else if(n == 3)
    {
        balance();
    }
    else
    {
        printf("There's no option for that!");
        getch();
        main();
    }
}

void inputname()
{
    int i, n;
    for(i = total; n != 0; i++)
    {
        printf("<--------------Total Bank Members: %d----------->\n", total);
        printf("### New Membership ####\n\n\n");
        printf("Person's Name: ");
        scanf("%s", bank[i].name);
        printf("Person's Account Number: ");
        scanf("%d", &bank[i].accnum);
        printf("Person's Account Balance: ");
        scanf("%d", &bank[i].accbal);
        printf("\n--------------------------------------------\n\nWant to add more? [Yes = 1/No = 0]: ");
        scanf("%d", &n);
        system("cls");
        total++;
    }
    main();
}

void myacc()
{
    system("cls");
    int n, i, acc, index, flag;
    printf("\n<================== Withdrawal/Deposit Section ======================>\n\n\n");
    printf("Account Number: ");
    scanf("%d", &acc);
    printf("\n1. Deposit Money\n\n");
    printf("2. Withdraw Money\n\n");
    printf("Choose: ");
    scanf("%d", &n);
    if(n == 1)
    {
        system("cls");
        printf("<--------------Account Number %d----------->\n\n", acc);
        printf("### Money Deposit ####\n\n\n");
        for(i = 0; i < total; i++)
        {
            if(acc == bank[i].accnum)
            {
                index = i;
                flag = 1;
            }
        }
        if(flag == 1)
        {
            printf("Name: %s\n", bank[index].name);
            printf("Current Balance: %d", bank[index].accbal);
            printf("\n\nAdd Money: ");
            scanf("%d", &n);
            bank[index].accbal += n;
            printf("Money %d Added Successfully!", n);
            getch();
        }
        else
        {
            printf("There's no Account for that number!");
            getch();
            myacc();
        }
        flag = 0;
    }
    else if(n == 2)
    {
        system("cls");
        printf("<--------------Account Number %d----------->\n\n", acc);
        printf("### Money Withdrawal ####\n\n\n");
        for(i = 0; i < total; i++)
        {
            if(acc == bank[i].accnum)
            {
                index = i;
                flag = 1;
            }
        }
        if(flag == 1)
        {
            printf("Name: %s\n", bank[index].name);
            printf("Current Balance: %d", bank[index].accbal);
            printf("\n\nWithdraw Money: ");
            scanf("%d", &n);
            if(n <= bank[index].accbal)
            {
                bank[index].accbal -= n;
                printf("Money %d Withdrawn Successfully!", n);
            }
            else
            {
                printf("Insufficient Fund!");
            }

        }
        else
        {
            printf("There's no Account for that number!");
            getch();
            myacc();
        }
    }
    else
    {
        printf("Invalid Option Selected!");
        getch();
        myacc();
    }
    flag = 0;
    getch();
    main();
}

void balance()
{
    int n, i, flag;
    printf("<--------------Total Bank Members: %d----------->\n", total);
    printf("### Members Balance Search ####\n\n\n");
    printf("Enter Balance Amount: ");
    scanf("%d", &n);
    system("cls");
    for(i = 0; i < total; i++)
    {
        if(bank[i].accbal <= n)
        {
            if(flag != 1)
            {
                printf("<---------------Balance Below %d--------------------->\n\n\n", n);
            }
            flag = 1;
            printf("Account Name: %s", bank[i].name);
            printf("\nAccount Number: %d", bank[i].accnum);
            printf("\nAccount Balance: %d\n\n", bank[i].accbal);
            printf("||--------------------------------------------------||\n\n");
        }
    }
    if(flag != 1)
    {
        printf("\nNo members have balance below %d", n);
    }
    getch();
    main();
}

void demomembers()
{
    //--------------------------Demo Informations--------------------------------------

    //Member 1 Info
    strcpy(bank[0].name, "MD. Samiur Rahman Mian");
    bank[0].accnum = 1111;
    bank[0].accbal = 2250;
    //Member 2 Info
    strcpy(bank[1].name, "Soaib Ahmed");
    bank[1].accnum = 2222;
    bank[1].accbal = 3000;
    //Member 3 Info
    strcpy(bank[2].name, "Tarif Shariar Arnob");
    bank[2].accnum = 3333;
    bank[2].accbal = 2070;
    //Member 4 Info
    strcpy(bank[3].name, "Jubair Dihan");
    bank[3].accnum = 4444;
    bank[3].accbal = 5800;

    //---------------------------------------------------------------------------------
}
