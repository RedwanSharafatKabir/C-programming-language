#include<stdio.h>
int main()
{
    double ft, st, annual;
    double total;
    printf("first term : ");
    scanf("%lf", &ft);
    printf("second term : ");
    scanf("%lf", &st);
    printf("Final term : ");
    scanf("%lf", &annual);
    total=ft/4.0+st/4.0+annual/2.0;
    printf("Total Marks distribution : %.2lf\n", total);

    return 0;
}
