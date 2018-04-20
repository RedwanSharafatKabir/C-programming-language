#include<stdio.h>
int name(int fact)
{
    if(fact==0)
        return 1;
    else
        return fact*name(fact-1);
}
int main()
{
    int fac,result;
    scanf("%d",&fac);
    //result=name(fac);
    printf("%d! = %d\n",fac,name(fac));
    return 0;
}
