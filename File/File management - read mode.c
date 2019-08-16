#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    FILE *fp;
    fp=fopen("file_read.txt","r");      ///  এখানে  read mode এর  কাজ  হলো  পূর্বের  created ফাইল  থেকে  রিড  করা   ///
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
    fclose(fp);
    return 0;
}
