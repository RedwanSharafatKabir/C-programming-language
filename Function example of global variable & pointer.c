#include<stdio.h>
/// Using Pointer ///
/*void name(int x,int y,int *s,int *sb,int *m,int *d)
{
    *s=x+y;
    *sb=abs(x-y);
    *m=x*y;
    *d=x/y;
}
int main()
{
    int a,b,sum,sub,mult,div;
    scanf("%d%d",&a,&b);
    name(a,b,&sum,&sub,&mult,&div);
    printf("%d %d %d %d\n",sum,sub,mult,div);
    return 0;
}*/
/// Using Global Variable ///
int s,sb,m,d;
void name(int x,int y)
{
    s=x+y;
    sb=abs(x-y);
    m=x*y;
    d=x/y;
}
int main()
{
    int a,b,sum,sub,mult,div;
    scanf("%d%d",&a,&b);
    name(a,b);
    sum=s;sub=sb;mult=m;div=d;
    printf("%d %d %d %d\n",sum,sub,mult,div);
    return 0;
}
