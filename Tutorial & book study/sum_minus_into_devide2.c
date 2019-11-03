#include<stdio.h>
int main()
{
    double a, b = 0, add, subtruction, into, devision;
    printf("First number : ");
    scanf("%lf", &a);
    add=a+b;
    printf("SUM : %.2lf\n", add);
    subtruction=a-b;
    printf("Negative value is : %.2lf\n", subtruction);
    into=a*b;
    printf("Multiple : %.2lf\n", into);
    devision=b/a;
    printf("Devision : %.2lf\n", devision);


    return 0;
}
