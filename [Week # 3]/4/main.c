#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c = 21;
    printf("There are 21 Matchsticks in this Game!\n");
    while(c >= 1)
    {
        printf("\nMatch Sticks Remaining: %d", c);
        printf("\nPlease Select Match sticks between 1 to 4: ");
        scanf("%d", &a);
        if(a > 4)
        {
            printf("You Cannot Select more than 4");
            break;
        }
        b = 5 - a;
        printf("Your Computer Chose: %d", b);
        c = c - a - b;
        if(c == 1)
        {
            break;
        }
    }
    c--;
    printf("\nComputer Wins!");
}
