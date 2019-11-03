#include<stdio.h>
#include<math.h>
int main()
{
    float a1, a2, a3, i, n, s, area;
    scanf("%f", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%f%f%f",&a1,&a2,&a3);
        if((a1+a2)==a3 || (a1+a2)>a3 || (a1*a1)+(a2*a2)==(a3*a3))
           {
              s=(a1+a2+a3)/2;
              area=sqrt(s*(s-a1)*(s-a2)*(s-a3));
              printf("Case %f: %.101f\n",i,area);
           }
        else
            printf("Case %f: error\n",i);


    }

    return 0;
}
