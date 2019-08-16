#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="File_page_43.txt";
    fp=fopen(filename,"w");
    fprintf(fp,"This file is created by my program!\n");
    fprintf(fp,"This is interesting.\n");
    fclose(fp);
    return 0;
}
