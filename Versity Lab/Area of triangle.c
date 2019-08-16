#include<stdio.h>
int main()
{
    double x,y,z,s,area;
    scanf("%lf %lf %lf",&x,&y,&z);
    s=(x+y+z)/2;
    if(s>x && s>y && s>z){
    area=(s*(s-x)*(s-y)*(s-z));
    printf("\nThe area of triangle is : %.4lf\n",sqrt(area));}
    else if(s==x || s==y || s==z)printf("\nResult will be zero\n");
    else printf("\nResult will be Undefined\n");

    return 0;
}
