#include<stdio.h>
int main()
{
    char a,*p,b,*q,c,*r;
    scanf("%c %c %c",&a,&b,&c);
    p=&a;
    q=&b;
    r=&c;
    printf("%c %c %c\n",*p,*q,*r);
    return 0;
}
