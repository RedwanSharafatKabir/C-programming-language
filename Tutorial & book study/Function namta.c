#include<stdio.h>
int name(int a, int b)
{
    int n;
    for(b=1;b<=10;b++){
        n=(a*b);
        printf("%d * %d = %d\n",a,b,n);
    }
    return n;
}
int main()
{
    int m,x,i;
    scanf("%d",&x);
    m=name(x,i);
    return 0;
}

