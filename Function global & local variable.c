#include<stdio.h>
int b=52;
int name(int a)
{
    int n;
    n=a+b;
    return n;
}
int main()
{
    int m,s,t;
    scanf("%d",&s);
    m=name(s);
    printf("%d\n",abs(m));
    return 0;
}
