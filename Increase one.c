#include <stdio.h>
int calc(int *a)
{
    ++*a;
    return a;
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n) ;
    calc(&n);
    printf("%d\n",n);
    return 0 ;
}
