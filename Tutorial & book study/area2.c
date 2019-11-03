#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,i,n;
    double area,p;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b)==c || (a+b)>c || (a*a)+(b*b)==(c*c))
           {
              p=(double)(a+b+c)/2;
              area=sqrt(p*(p-a)*(p-b)*(p-c));
              printf("Case %d: %.10lf\n",i,area);
           }
        else
            printf("Case %d: error\n",i);
    }
    return 0;
}
