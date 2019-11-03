#include <stdio.h>
int main ()
{
    int a ;
    a = fib(5) ;
    printf ("%d\n",a) ;
    return 0 ;
}
int fib (int n)
{
    if ((n==1) || n==0)
    return n ;
    else
    return fib(n-1) + fib(n-2) ;
}
