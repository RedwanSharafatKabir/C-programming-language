#include<stdio.h>
int name()
{
    static int n=0;
    n++;
    printf("%d\n",n);
    return n;
}
int main()
{
    name();                  ///    printf("%d\n",name());
    name();                  ///    printf("%d\n",name());
    name();                  ///    printf("%d\n",name());
    name();                  ///    printf("%d\n",name());
    name();                  ///    printf("%d\n",name());
    return 0;
}
