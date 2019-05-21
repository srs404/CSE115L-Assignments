#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void demoplay();
void newplay();
void sortplay();

struct player
{
    char name[50];
    int age, test;
    float avg;
}play[20];


int main()
{
    int total = 4;
    demoplay();
    options(total);
}

void options(int total)
{
    system("cls");
    int n;
    printf("<--------------Total Members: %d----------->\n\n\n", total);
    printf("1. New Player\n\n");
    printf("2. Sort Player's Average Runs\n\n");
    printf("Choose: ");
    scanf("%d", &n);

    system("cls");

    if(n == 1)
    {
        newplay(total);
    }
    else if(n == 2)
    {
        sortplay(total);
    }
    else
    {
        printf("Invalid Option Selected!");
        getch();
        options(total);
    }
}

void newplay(int total)
{
    int i, n;
    for(i = total; n != 0; i++)
    {
        printf("<--------------Total Players: %d----------->\n", total);
        printf("### New Player ####\n\n\n");
        printf("Player's Name: ");
        scanf("%s", play[i].name);
        printf("%s's Age: ", play[i].name);
        scanf("%d", &play[i].age);
        printf("%s's Total Test Matches: ", play[i].name);
        scanf("%d", &play[i].test);
        printf("%s's Average Run: ", play[i].name);
        scanf("%f", &play[i].test);
        printf("\n--------------------------------------------\n\nWant to add more? [Yes = 1/No = 0]: ");
        scanf("%d", &n);
        system("cls");
        total++;
    }
    options(total);
}

void sortplay(int total)
{
    int i, j, index;
    float avg;
    printf("/------------------------------ Sorted Players ------------------------/\n\n\n");
    for(i = 0; i < total; i++)
    {
        avg = play[i].avg;
        for(j = 0; j < total; j++)
        {
            if(avg <= play[j].avg)
            {
                avg = play[j].avg;
                index = j;
            }
        }
        printf(" Name: %s\n Age: %d\n Total Test Played: %d\n Average Run: %0.2f\n\n", play[index].name, play[index].age, play[index].test, play[index].avg);
        play[index].avg = 0;
    }
    printf("//----------------------------------------------------------------//");
}

void demoplay()
{
    //--------------------------Demo Informations--------------------------------------

    //Member 1 Info
    strcpy(play[0].name, "MD. Samiur Rahman Mian");
    play[0].age = 25;
    play[0].test = 37;
    play[0].avg = 44.65;
    //Member 2 Info
    strcpy(play[1].name, "Soaib Ahmed");
    play[1].age = 23;
    play[1].test = 32;
    play[1].avg = 49.38;
    //Member 3 Info
    strcpy(play[2].name, "Tarif Shariar Arnob");
    play[2].age = 27;
    play[2].test = 40;
    play[2].avg = 48.50;
    //Member 4 Info
    strcpy(play[3].name, "Jubair Dihan");
    play[3].age = 24;
    play[3].test = 35;
    play[3].avg = 51.33;

    //---------------------------------------------------------------------------------
}
