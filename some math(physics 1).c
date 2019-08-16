#include<stdio.h>
int main()
{
    double u, s, a, t;

    printf("Primary Velocity : ");
    scanf("%lf", &u);
    printf("\nTime : ");
    scanf("%lf", &t);
    printf("\nAcceleration : ");
    scanf("%lf", &a);
    s=u*t+.5*a*t*t;
    printf("\nPassed Distance : %.2lf\n", s);

    return 0;
}
