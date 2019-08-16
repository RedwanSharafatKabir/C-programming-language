#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char a[1000];
    fp=fopen("file_random.txt","w");
    fprintf(fp,"Munna valo chele\n");
    fclose(fp);
    fp=fopen("file_random.txt","r");
    fseek(fp,7,0);
    fseek(fp,-5,1);     /// Current position.
    //fscanf(fp,"%s",a);
    fgets(a,15,fp);
    puts(a);
    fclose(fp);
    return 0;
}
