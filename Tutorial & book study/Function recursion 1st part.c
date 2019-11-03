#include<stdio.h>
void name(int a,int b,int c)
{
    int x,y,i,j,sum;
    if(a+b+c!=0){
        x=a%10;
        y=b%10;
        sum=x+y+c;
        name(a/10,b/10,sum/10);
        printf("%d",sum%10);
    }
}
int main()
{
    int n,m,o;
    scanf("%d%d%d",&n,&m,&o);
    name(n,m,o);
    printf("\n");
    return 0;
}
