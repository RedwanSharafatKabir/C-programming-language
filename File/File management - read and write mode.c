#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    FILE *fp;
    fp=fopen("file_write_read.txt","w");
    scanf("%d",&n);
    fprintf(fp,"%d\n",n);
    fclose(fp);
    ///
    fp=fopen("file_write_read.txt","r");
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
    fclose(fp);
    return 0;
}
