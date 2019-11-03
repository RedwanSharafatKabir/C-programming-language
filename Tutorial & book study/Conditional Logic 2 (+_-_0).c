#include<stdio.h>
int main()
{
    int n;
    printf("Value of n : ");
    scanf("%d", &n);
    if(n>0)
    {
        printf("n is positive\n");
    }
    else if(n<0)
    {
        printf("n is negative\n");
    }
    else
    {
        printf("n is ZERO\n");
    }

    return 0;
}
