#include<stdio.h>
int main()
{
    int x, y, x_plus_y, x_minus_y;
    printf("Value of x+y : ");
    scanf("%d", &x_plus_y);
    printf("Value of x-y : ");
    scanf("%d", &x_minus_y);
    x=(x_plus_y + x_minus_y)/2;
    y=(x_plus_y - x_minus_y)/2;
    printf("x = %d, y = %d", x, y);

    return 0;
}
