#include<stdio.h>
int name(int a,int b)
{
    int n;
    n=a+b;
    return n;
}
int war(int x,int y)
{
    int add=name(x,y);
    if(add<0)
        return -add;
    else
        return add;
}
int main()
{
    int m,s,t;
    scanf("%d%d",&s,&t);
    m=war(s,t);
    printf("%d\n",(m));
    return 0;
}
