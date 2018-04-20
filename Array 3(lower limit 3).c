#include<stdio.h>
int main()
{
    int A1[10]={10,20,30,40,50,60,70,80,90,100},A2[10],i,j;
    for(j=9,i=0;i<10;i++,j--)
    {
        A2[j]=A1[i];
    }
    for(i=0;i<10;i++){
        A1[i]=A2[j];
        printf("%d\n", A2[i]);
    }
    return 0;
}

