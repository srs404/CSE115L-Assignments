#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Customer
{
    char name[30];
    char phoneNum[20];
    int CallDurHr;
}ct[500];

void EidBonus(struct Customer ct[], int num);
void writeInfo(struct Customer ct[], int num);

int main()
{
    int i,n;

    printf("How many Customers?\n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the %dth Customer's Name: ",i+1);
        scanf("%s",ct[i].name);

        printf("Enter the %dth Customer's Phone Number: ",i+1);
        scanf("%s",ct[i].phoneNum);

        printf("Enter the %dth Customer Call Duration: ",i+1);
        scanf("%d",&ct[i].CallDurHr);
        printf("\n\n");
    }

    EidBonus(ct,n);
    writeInfo(ct,n);

    return 0;
}

void EidBonus(struct Customer ct[], int num)
{
    int i, bonus;

    for(i=0; i<num; i++)
    {
        if(ct[i].CallDurHr > 1)
        {
            bonus = (ct[i].CallDurHr - 1) * 5;
            printf("Name: %s, Phone Number: %s, Eid Bonus: %d\n",ct[i].name, ct[i].phoneNum, bonus);
        }
    }
}

void writeInfo(struct Customer ct[], int num)
{
    FILE *fp;
    int i;

    fp = fopen("customer.txt", "w");
    for(i=0; i<num; i++)
    {
        fprintf(fp, "Name: %s, Phone Number: %s, Call Duration: %d hours\n", ct[i].name, ct[i].phoneNum, ct[i].CallDurHr);
    }
}
