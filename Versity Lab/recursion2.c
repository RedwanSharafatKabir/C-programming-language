#include <stdio.h>
void call (int n)
{
    if (n==11)
    return ;
    printf ("%d\n",n) ;
    call (n+1) ;


}
int main ()
{
    call (1) ;
    return 0 ;
}

