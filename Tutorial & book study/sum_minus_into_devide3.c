#include<stdio.h>
int main()
{
    int a, b, value;
    char science;
    printf("First : ");
    scanf("%d", &a);
    printf("Second : ");
    scanf("%d", &b);
    value=a+b;
    science='+';
    printf("%d %c %d = %d\n", a, science, b, value);


    return 0;
}
