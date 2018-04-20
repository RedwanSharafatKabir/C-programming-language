#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int twicesum(int n,int m)
{
    return add(n,m)*3;
}
int main(int x,int y)
{
    /// int x,y;
    scanf("%d%d",&x,&y);
    printf("Twice of Sum: %d\n",twicesum(x,y));
    return 0;
}

