#include<stdio.h>
int main()
{
    char a[100],*p;
    gets(a);
    p=a;
    printf("Name of our country is : %s\n",p);
    printf("Address of our country is : %p\n",a);
    return 0;
}


