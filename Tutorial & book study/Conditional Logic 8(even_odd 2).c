#include<stdio.h>
int main()
{
    int n;
    printf("Value of n : ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("\nn is even\n");
    }
    else {
        printf("\nn is odd\n");
    }

    return 0;
}

