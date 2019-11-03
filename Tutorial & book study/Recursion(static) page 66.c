#include<stdio.h>
void fnc()
{
    int x=10;
    static int n=10;
    x=x+2;
    n=n+2;
    printf("X=%d N=%d\n",x,n);
}
int main()
{
    fnc();
    fnc();
    fnc();
    fnc();
    fnc();
    return 0;
}
