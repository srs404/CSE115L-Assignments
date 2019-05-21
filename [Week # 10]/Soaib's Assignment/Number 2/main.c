#include<stdio.h>
#include<string.h>

struct Books
{
    char name[20];
    char auth[20];
    char sub[20];
    int id;
}b[3];

int main()
{
    FILE *fi, *fo;
    char st[20];
    int i, flag=0;

    for(i=0;i<3;i++)
    {
        printf("Enter The %dth Book's Name: ",i+1);
        gets(b[i].name);
        printf("Enter The %dth Book's Aurthor: ",i+1);
        gets(b[i].auth);
        printf("Enter The %dth Book's Subject: ",i+1);
        gets(b[i].sub);
        printf("Enter The %dth Book's Id: ",i+1);
        scanf("%d",&b[i].id);
        fflush(stdin);
    }
    fi=fopen("input.txt","r");
    fo=fopen("output.txt","w");
    if((fi=fopen("input.txt","r"))==0)
    {
        printf("The file doesn't exist.\n");
    }
    fgets(st,20,fi);
    for(i=0;i<3;i++)
    {
        if(strcmp(st,b[i].name)==0)
        {
            flag=1;
            fprintf(fo,"%s %s %d",b[i].auth,b[i].sub,b[i].id);
        }
        if(flag==0)
        {
            fprintf(fo,"Not Found");
        }
    }
    fclose(fi);
    fclose(fo);
}
