#include<stdio.h>
#define PI 3.1416
#define P printf
#define pin(a) printf("%d\n",a);
#define MAX(a,b) (a>b)? (a) : (b)
int main()
{
    P("%.4lf\n",PI);
    pin(MAX(12,10));
    /// printf("%d\n",(5>6)?(5):(6));
    return 0;
}
