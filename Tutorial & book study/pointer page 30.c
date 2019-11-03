#include<stdio.h>
int main()
{
    int a,*p;
    scanf("%d",&a);
    p=&a;
    printf("Pointer of a is : %d\n",*p);
    a=20;
    printf("Pointer of a is : %d\n",*p);
    printf("Address of a is : %p\n",p);
    return 0;
}


