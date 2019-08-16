#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    FILE *fp,*check;
    fp=fopen("file_setter_output.txt","r");
    check=fopen("file_contestant_output.txt","r");
    while(fscanf(fp,"%d",&a)!=EOF){
    fscanf(check,"%d",&b);
    if(a!=b){
        printf("Wrong Answer\n");
        return 0;
    }
    }
    printf("Accepted\n");
    fclose(fp);
    fclose(check);
    return 0;
}


