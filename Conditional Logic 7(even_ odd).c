#include<stdio.h>
int main()
{
    int n, remainder;
    printf("Value of n : ");
    scanf("%d", &n);
    remainder=n%2;
    if(remainder==0)
    {
        printf("n is even\n");
    }
    else {
        printf("n is odd\n");
    }

    return 0;
}
