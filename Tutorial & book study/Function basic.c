#include<stdio.h>
int name(int a, int b)
{
    int n;
    n=a+b;
    return n;
}
int main()
{
    int m,x,y;
    scanf("%d%d",&x,&y);
    m=name(x,y);
    printf("%d\n",m);
    return 0;
}
