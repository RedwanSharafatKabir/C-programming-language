#include<stdio.h>
int main()
{
    char fun[100];
    int a=10,b=4;
    gets(fun);
    printf("%*.*s",a,b,fun);

    return 0;
}
