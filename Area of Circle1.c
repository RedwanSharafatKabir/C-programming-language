#include<stdio.h>
int main()
{
    double R, sum, PI=3.14159;

    scanf("%lf", &R);
    sum=PI*R*R;
    printf("Area of Circle : %.2lf", sum);

    return 0;
}
