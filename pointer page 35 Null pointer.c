#include<stdio.h>
int main()
{
    int x,y,*p,*q;
    printf("Value of x: ");
    scanf("%d",&x);
    p=&x;
    q=&y;
    y=*p;
    *p=NULL;
    *q=20;
    printf("Value of x: %d\n",x);
    printf("Value of y: %d\n",y);
    printf("Value of *p: %d\n",*p);
    printf("Value of *q: %d\n",*q);
    return 0;
}
