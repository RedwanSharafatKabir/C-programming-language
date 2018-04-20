#include<stdio.h>
int main()
{
    char a,*p,**q;
    scanf("%c",&a);
    p=&a;
    q=&p;
    printf("Value of a: %c\n",a);
    printf("Value of a: %c\n",*p);
    printf("Value of *p: %c\n",**q);
    printf("Address of a: %p\n",p);
    printf("Address of *p: %p\n",**q);
    return 0;
}
