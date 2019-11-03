#include<stdio.h>
int main()
{
    int x,*p=NULL;
    printf("Value of x: ");
    scanf("%d",&x);
    p=&x;
    printf("Value of *p: %d\n",*p);
    return 0;
}
