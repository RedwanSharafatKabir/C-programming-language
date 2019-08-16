#include<stdio.h>
int main()
{
    double Q,P;
    printf("Type value of Q : ");
    scanf("%lf",&Q);
    P=1000/(3+(pow(Q,2)/1900));
    printf("Value of P is : %.2lf",P);

    return 0;
}
