#include<stdio.h>
int main()
{
    int x,y,*p;
    printf("Value of x: ");
    scanf("%d",&x);
    p=&x;
    y=*p;
    *p=15;
    printf("Value of x: %d\n",x);
    printf("Value of x: %d\n",y);
    printf("Value of x: %d\n",*p);
    printf("Value of x: %p\n",&x);
    printf("Value of x: %p\n",&y);
    printf("Value of x: %p\n",p);
    return 0;
}
