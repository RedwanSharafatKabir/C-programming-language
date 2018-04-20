#include<stdio.h>
int main()
{
    int x,*p;
    printf("Value of x: ");
    scanf("%d",&x);
    p=&x;
    *p=20;
    printf("Value of x: %d\n",x);
    x=15;
    printf("Value of x: %d\n",x);
    printf("Value %d is stored at location %p\n",*p,p);
    printf("Address of x is: %p\n",&x);
    printf("value of p is: %p\n",p);
    return 0;
}
