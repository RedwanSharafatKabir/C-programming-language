#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char file_name[1000];
void file_rename(char *new_name)
{
    strcpy(file_name,new_name);
    strcat(file_name,".txt");
}
FILE *create(char *mode)
{
    FILE *fp;
    fp=fopen(file_name,mode);
    return fp;
}
void file_input(FILE *fp)
{
    fprintf(fp,"%s\n",file_name);
}
void file_read(FILE *fp)
{
    char a[1000];
    fgets(a,1000,fp);
    ///fscanf(fp,"%s",a);
    printf("%s\n",a);
}
int main()
{
    FILE *fp;
    file_rename("My Function File");
    fp=create("w");
    file_input(fp);
    fclose(fp);
    fp=create("r");
    file_read(fp);
    fclose(fp);
    return 0;
}
