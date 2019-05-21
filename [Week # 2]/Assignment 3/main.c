#include <stdio.h>

int main()
{
    int year1, day = 0, year2 = 1900; //year1 = Inputted Year, year2 = Start Year, day = how many days
    printf("Enter Year: ");
    scanf("%d", &year1);
    if(year1%4 == 0)
    {
        --day;
    }
    while(year1>=year2)
    {
        //Checking if it's Leap Year or not
        if(year2%4 == 0)
        {
            day += 2;
        }
        else
        {
            day += 1;
        }
        //Checking the Day of year
        if(year1 == 1900)
        {
            printf("The First Day of %d is: Monday", year1);
        }
        else if(day%7 == 0 && year2 == year1)
        {
             printf("The First Day of %d is: Saturday", year1);
        }
        else if(day%7 == 1 && year2 == year1)
        {
             printf("The First Day of %d is: Sunday", year1);
        }
        else if(day%7 == 2 && year2 == year1)
        {
             printf("The First Day of %d is: Monday", year1);
        }
        else if(day%7 == 3 && year2 == year1)
        {
             printf("The First Day of %d is: Tuesday", year1);
        }
        else if(day%7 == 4 && year2 == year1)
        {
             printf("The First Day of %d is: Wednesday", year1);
        }
        else if(day%7 == 5 && year2 == year1)
        {
             printf("The First Day of %d is: Thursday", year1);
        }
        else if(day%7 == 6 && year2 == year1)
        {
             printf("The First Day of %d is: Friday", year1);
        }
        year2++; //This is part of While Loop
    }
    return 0;
}
