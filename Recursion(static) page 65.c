#include<stdio.h>
int x;
static int y=5;
void fnc()
{
    x=x+1;
    y=y+1;
}
int main()
{
    fnc();
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}

