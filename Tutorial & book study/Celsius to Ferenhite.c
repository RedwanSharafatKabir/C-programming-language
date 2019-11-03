#include<stdio.h>
int main()
{
    double C, F;
    printf("Celsius Temperature : ");
    scanf("%lf", &C);
    F=((C*9)/5)+32;
    printf("\nFerenhite Temperature : %.2lf\n", F);

    return 0;
}
