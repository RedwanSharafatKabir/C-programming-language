#include<stdio.h>
int main()
{
    char a,*p;
    scanf("%c",&a);
    p=&a;
    printf("Address of a: %p\n",p);
    printf("Address of *p: %p\n",*p);
    return 0;
}

