#include<stdio.h>
int main()
{
    int a,b,c,d,sum,n,i;
    int Ara[4];
    sum=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&Ara[i]);
        sum=sum+Ara[i];

    }
       printf("%d",sum);

    return 0;
}
