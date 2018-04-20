#include<stdio.h>
int main()
{
    int a,*p;
    scanf("%d",&a);
    p=&a;
    printf("Value of a is : %d\n",a);
    printf("Pointer of a is : %d\n",*p);
    printf("Address of a is : %p\n",p);
    return 0;
}

