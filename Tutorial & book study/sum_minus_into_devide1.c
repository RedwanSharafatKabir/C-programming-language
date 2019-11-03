#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("\nEnter the second number : ");
    scanf("%d", &b);
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d-%d=%d\n", a, b, a-b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d/%d=%d\n", a, b, a/b);

    return 0;
}
