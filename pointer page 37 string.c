#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    printf("Name of our country is : %s\n",a);
    printf("Address of our country is : %p\n",a);
    return 0;
}

