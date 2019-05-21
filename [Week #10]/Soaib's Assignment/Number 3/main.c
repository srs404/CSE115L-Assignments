#include<stdio.h>
#include<string.h>

struct Birds
{
    char name[20];
    char kindom[20];
    char phylum[20];
    int index;
}b[3];

int main()
{
    FILE *fi, *fo;
    char st[20];
    int i, flag=0;

    for(i=0;i<3;i++)
    {
        printf("Enter The %dth Birds's Name: ",i+1);
        gets(b[i].name);
        printf("Enter The %dth Birds's Kingdom: ",i+1);
        gets(b[i].kindom);
        printf("Enter The %dth Birds's phylum: ",i+1);
        gets(b[i].phylum);
        printf("Enter The %dth Birds's Index: ",i+1);
        scanf("%d",&b[i].index);
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
            fprintf(fo,"%s %s %d",b[i].kindom,b[i].phylum,b[i].index);
        }
        if(flag==0)
        {
            fprintf(fo,"Not Found");
        }
    }
    fclose(fi);
    fclose(fo);
}
