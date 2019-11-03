#include <stdio.h>
void call (int n)
{
    if (n==11)
    return ;
    call (n+1) ;
    printf ("%d\n",n) ;

}
int main ()
{
    call (1) ;
    return 0 ;
}
