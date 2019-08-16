#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    char a[100];
    FILE *fp1,*fp2;
    fp1=fopen("file_copy1.txt","w");
    gets(a);
    fprintf(fp1,"%s\n",a);
    fclose(fp1);
    ///
    fp1=fopen("file_copy1.txt","r");
    if(fp1==NULL){
        printf("File not found\n");
    }
    fp2=fopen("file_copy2.txt","w");
    fgets(a,100,fp1);
    fprintf(fp2,"%s\n",a);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

