#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    int a,b;
    double p,rad,s,c,t;
    printf("Values: ");
    scanf("%d %d",&a,&b);
    printf("Angles: ");
    scanf("%lf%lf%lf",&s,&c,&t);
    p=pow(a,b);
    printf("\nDifference: %d\n",abs(a-b));
    printf("Difference as long integer: %ld\n",labs(a-b));
    printf("Power: %.2lf\n",p);
    printf("Square Root of %d is: %.2lf\n",a,sqrt(a));
    printf("Square Root of %d is: %.2lf\n",b,sqrt(b));
    printf("Reminder of %d/%d is: %.2lf\n",a,b,fmod(a,b));
    rad=(PI*s)/180;
    printf("sin(%.0lf): %.2lf\n",s,sin(rad));
    rad=(PI*c)/180;
    printf("cos(%.0lf): %.2lf\n",c,cos(rad));
    rad=(PI*t)/180;
    printf("tan(%.0lf): %.2lf\n",t,tan(rad));
    printf("sin hyperbolic(%.0lf): %.2lf\n",t,sinh(rad));
    printf("cos hyperbolic(%.0lf): %.2lf\n",t,cosh(rad));
    printf("tan hyperbolic(%.0lf): %.2lf\n",t,tanh(rad));
    ///rad=(PI*(a-b))/180;
    printf("sin^-1(%d): %.2lf\n",abs(a-b),asin(abs(a-b)));  /// sin^-1 is in radian value .
    ///rad=(PI*(a-b))/180;
    printf("cos^-1(%d): %.2lf\n",abs(a-b),acos(abs(a-b)));  /// cos^-1 is in radian value .
    ///printf("%d\n",abs(a-b),atan(a-b));
    printf("e^%d: %.2lf\n",abs(a-b),exp(abs(a-b)));
    printf("ln(%d): %.2lf\n",abs(a-b),log(abs(a-b)));
    printf("10 based log(%d): %.2lf\n",abs(a-b),log10(abs(a-b)));
    printf("Nearest integer number of 9.3 as descending order is: %.2lf\n",floor(9.3));
    printf("Nearest integer number of 9.3 as ascending order is: %.2lf\n",ceil(9.3));
    return 0;
}
