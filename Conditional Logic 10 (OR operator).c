#include<stdio.h>
int main()
{
    int a;
    printf("Value of a : ");
    scanf("%d", &a);
    if(a>=1 || a<=10)
    {
        printf("\nI'm a good boy\n");
    }
    else
    {
        printf("\nYou're bad\n");
    }

    return 0;

}
