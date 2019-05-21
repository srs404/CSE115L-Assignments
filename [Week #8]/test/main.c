#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("F:/bao.txt","w");
    if(fp == NULL)
            printf("The file is not there.");
    else
        {
            fprintf(fp, "Hello World");
            printf("File successfully opened.");
            fclose(fp);
        }

        return 0;

}
