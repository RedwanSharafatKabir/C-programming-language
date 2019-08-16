#include <stdio.h>
#include <math.h>
double Area(double a, double b, double c)
{
    double area,s;
    s=(a+b+c)/2;
    area=(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main ()
{
    double a,b,c,area;
    scanf("%lf%lf%lf",&a,&b,&c);
    area=Area(a,b,c);
    printf("%.2lf\n",sqrt(area));
    return 0 ;
}
