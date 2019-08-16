#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int tricesum(int n,int m)
{
    return add(n,m)*3;
}
int main(int x,int y)
{
    /// int x,y;
    scanf("%d%d",&x,&y);
    printf("Trice of Sum: %d\n",tricesum(x,y));
    return 0;
}

