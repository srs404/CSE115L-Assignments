#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct library
{
    char title[50], author[50];
    int accnum, price, issue;
}bk[100];

int main() // Main Body Acting as Global String
{
    int total = 0;
    options(total);
}

void options(int total) // Main Function Body with Options
{
    int n;
    system("cls");
    printf("<==================>\n\nBook Library Program\n\n<========================>\n\n\n");
    printf("1. Add Book Information\n");
    printf("2. Display Book Information\n");
    printf("3. List all books of given author\n");
    printf("4. List the title of specified book\n");
    printf("5. List the count of books in the library\n");
    printf("6. List the books in the order of accession Number\n");
    printf("7. Exit\n\n");
    printf("\n=========================\n   8. Add Demo Books\n=========================\n\n");
    printf("Choose: ");
    scanf("%d", &n);
    system("cls");
    if(n == 1)
    {
        inpbook(total);
    }
    else if(n == 2)
    {
        display(total);
    }
    else if(n == 3)
    {
        listauth(total);
    }
    else if(n == 4)
    {
        listitle(total);
    }
    else if(n == 5)
    {
        listbk(total);
    }
    else if(n == 6)
    {
        sortbk(total);
    }
    else if(n == 8)
    {
        demobooks(total);
    }
    else if(n == 7)
    {

    }
}

void inpbook(int total) // Option 1
{
    int i, n, r;
    for(i = total; r != 0; i++)
    {

        printf("<--------------Add New Book [Total Books: %d]----------->\n\n\n", total);
        printf("Book's Title: ");
        scanf("%s", bk[i].title);
        printf("Author of %s: ", bk[i].title);
        scanf("%s", bk[i].author);
        printf("Price for %s: ", bk[i].title);
        scanf("%d", &bk[i].price);
        printf("Accession Number for %s: ", bk[i].title);
        scanf("%d", &bk[i].accnum);
        printf("Is %s issued [Yes = 1] : ", bk[i].title);
        scanf("%d", &bk[i].issue);
        printf("\n--------------------------------------------\nWant to add more? [Yes = 1/No = 0]: ");
        scanf("%d", &r);
        total = total + 1;
        system("cls");
    }
    options(total);
}

void display(int total) // Option 2
{
    if(total > 0)
    {
        int i, n, flag = 0;
        printf("<--------------Display Book Information [Total Books: %d]----------->\n\n\n", total);
        printf("Accession Number of Book: ");
        scanf("%d", &n);
        system("cls");
        for(i = 0; i < total; i++)
        {
            if(n == bk[i].accnum)
            {
                flag = 1;
                printf("/=======================================================/\n\n");
                printf("Book's Title: %s\n", bk[i].title);
                printf("Book's Author: %s\n", bk[i].author);
                printf("Book's Price: %d\n", bk[i].price);
                printf("Book's Accession Number: %d\n", bk[i].accnum);
                if(bk[i].issue == 1)
                {
                    printf("Book's Issued: YES\n\n");
                }
                else
                {
                    printf("Book's Issued: NO\n\n");
                }
                printf("/======================================================/\n\n");
            }
        }
        if(flag != 1)
        {
            printf("Invalid Accession Number! Try Again!");
            getch();
            options(total);
        }
    }
    else
    {
        printf("There aren't any Book in the Library!!");
    }

    getch();
    options(total);
}

void listauth(int total) // Option 3
{
    if(total > 0)
    {
        int i, flag = 0;
        char n[50];
        printf("<--------------Search Books of Author [Total Books: %d]----------->\n\n\n", total);
        printf("Author Name of Book: ");
        scanf("%s", n);
        system("cls");
        printf("<------------------------Books of %s--------------------->\n\n\n", n);
        for(i = 0; i < total; i++)
        {
            if(strcmp(n, bk[i].author) == 0)
            {
                flag = 1;
                printf("/=======================================================/\n\n");
                printf("Book's Title: %s\n", bk[i].title);
                printf("Book's Author: %s\n", bk[i].author);
                printf("Book's Price: %d\n", bk[i].price);
                printf("Book's Accession Number: %d\n", bk[i].accnum);
                if(bk[i].issue == 1)
                {
                    printf("Book's Issued: YES\n\n");
                }
                else
                {
                    printf("Book's Issued: NO\n\n");
                }
                printf("/======================================================/\n\n");
            }
        }
        if(flag != 1)
        {
            printf("Invalid Author Name! Try Again!");
            getch();
            options(total);
        }
    }
    else
    {
        printf("There Aren't Any Book in Library!");
    }
    getch();
    options(total);
}

void listitle(int total) // Option 4
{
    if(total > 0)
    {

        int n, i;
        printf("=================== List Book Title ===================\n\n\n");
        printf("Accession Number of Book: ");
        scanf("%d", &n);
        for(i = 0; i < total; i++)
        {
            if(n == bk[i].accnum)
            {
                printf("Book Title: %s\n\n", bk[i].title);
            }
        }
    }
    else
    {
        printf("There Aren't Any Book in Library!");
    }
    getch();
    options(total);
}

void listbk(int total) // Option 5
{
    if(total > 0)
    {
        int i;
        printf("<------------------List All Books [Total Books: %d]------------------>\n\n\n", total);
        for(i = 0; i < total; i++)
        {
            printf("/=========================%dth Book=============================/\n\n", i+1);
            printf("Book's Title: %s\n", bk[i].title);
            printf("Book's Author: %s\n", bk[i].author);
            printf("Book's Price: %d\n", bk[i].price);
            printf("Book's Accession Number: %d\n", bk[i].accnum);
            if(bk[i].issue == 1)
            {
                printf("Book's Issued: YES\n\n");
            }
            else
            {
                printf("Book's Issued: NO\n\n");
            }
            printf("/===============================================================/\n\n");
        }
    }
    else
    {
        printf("There Aren't Any Book in Library!");
    }

    getch();
    options(total);
}

void sortbk(int total) // Option 6
{
    if(total > 0)
    {
        int i, j, index, accnum;
        printf("/------------------------------ Sorted Books ------------------------/\n\n\n");
        for(i = 0; i < total; i++)
        {
            accnum = bk[i].accnum;
            for(j = 0; j < total; j++)
            {
                if(accnum <= bk[j].accnum)
                {
                    accnum = bk[j].accnum;
                    index = j;
                }
            }
            printf(" Title of Book: %s\n Author of %s: %s\n Price of %s: %d\n Accession Number: %d\n", bk[index].title, bk[index].title, bk[index].author, bk[index].title, bk[index].price, bk[index].accnum);
            if(bk[index].issue == 1)
            {
                printf(" Issued: YES");
            }
            else
            {
                printf(" Issued: NO");
            }
            printf("\n\n\n");
            bk[index].accnum = 0;
        }
        printf("//----------------------------------------------------------------//");
    }
    else
    {
        printf("There Aren't Any Books in Library!");
        getch();
        options(total);
    }
}

void demobooks(int total)
{
    //--------------------------Demo Informations--------------------------------------

    //Book 1 Info
    strcpy(bk[0].title, "Lucifer");
    strcpy(bk[0].author, "S.R. Sami");
    bk[0].price = 1500;
    bk[0].accnum = 1831;
    bk[0].issue = 1;
    //Book 2 Info
    strcpy(bk[1].title, "Holocrust");
    strcpy(bk[1].author, "Jubair Dihan");
    bk[1].price = 2500;
    bk[1].accnum = 1631;
    bk[1].issue = 0;
    //Book 3 Info
    strcpy(bk[2].title, "Harry Potter: Prisoner of Azkaban");
    strcpy(bk[2].author, "Soaib Ahmed");
    bk[2].price = 1750;
    bk[2].accnum = 1431;
    bk[2].issue = 1;
    //Book 4 Info
    strcpy(bk[3].title, "Fullmetal Alchemist: Brotherhood");
    strcpy(bk[3].author, "MD. Tarif Shariar Arnob");
    bk[3].price = 3000;
    bk[3].accnum = 1531;
    bk[3].issue = 1;
    //Book 5 Info
    strcpy(bk[4].title, "Dragon Ball Z: Manga");
    strcpy(bk[4].author, "Redwan Kibria");
    bk[4].price = 700;
    bk[4].accnum = 1731;
    bk[4].issue = 0;

    //---------------------------------------------------------------------------------
    total = 5;
    options(total);
}
