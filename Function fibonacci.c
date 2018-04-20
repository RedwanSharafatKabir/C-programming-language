#include<stdio.h>
int name(int x)
{
    if(x==0)
        return 0;
    else
        return x+name(x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",name(n));
    return 0;
}
