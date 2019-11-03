#include<stdio.h>
int main()
{
    double F, C;

    printf("\nFerenhite Temperature : ");
    scanf("%lf",&F);
    C=(F-32)*5/9;
    printf("\n %.2lf\n\n", C);

    return 0;
}
