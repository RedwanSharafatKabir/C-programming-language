#include<stdio.h>
int main()
{
    int n;
    printf("Value of n : ");
    scanf("%d", &n);
    if(n<576)
    {
        printf("n is less than 576\n");
    }
    else if(n>576)
    {
        printf("n is greater than 576\n");
    }
    else
    {
        printf("n is equal to 576\n");
    }

    return 0;
}
