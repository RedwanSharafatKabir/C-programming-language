#include<stdio.h>
int x;
void fnc(int y)
{
    y=y*2;
    x=x+10;
    printf("Function : x=%d, y=%d\n",x,y);
}
int main()
{
    int y=5;
    x=10;
    fnc(y);
    printf("Main :\t   x=%d, y=%d\n",x,y);
    return 0;
}
