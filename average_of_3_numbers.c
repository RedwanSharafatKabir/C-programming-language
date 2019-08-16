#include<stdio.h>
int main()
{
    float a, b, c, total, average;
    printf("Write down the first number: ");
    scanf("%f",&a);
    printf("Write down the second number: ");
    scanf("%f",&b);
    printf("Write down the third number: ");
    scanf("%f",&c);
    total=a+b+c;
    average=total/3;
    printf("\nthe total of %.f, %.f and %.f is %.f", a, b, c, total);
    printf("\n\nthe average of %.f, %.f and %.f is %.f", a, b, c, average);

    getch();

    return 0;


}
