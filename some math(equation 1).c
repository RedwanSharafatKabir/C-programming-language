#include<stdio.h>
int main()
{
    int x, y, sum1, sum2;
    printf("Value of x+y : ");
    scanf("%d", &sum1);
    printf("Value of x-y : ");
    scanf("%d", &sum2);
    x=(sum1 + sum2)/2;
    y=(sum1 - sum2)/2;
    printf("x = %d, y = %d", x, y);

    return 0;
}
