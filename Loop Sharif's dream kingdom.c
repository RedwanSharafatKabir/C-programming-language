#include<stdio.h>
int main()
{
    int z[100],a,b,c,i,x,y,sum,carry=0;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;a+b+c!=0;i++,a/=10,b/=10){
    x=a%10;
    y=b%10;
    sum=x+y+c;
    z[i]=sum%10;
    c=sum/10;
    carry++;
    }
    for(;i!=0;i--){
        printf("%d",z[i-1]);
    }
    printf("\n");
    printf("%d\n",carry-1);
    return 0;
}
