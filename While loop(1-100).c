#include<stdio.h>
int main()
{
    int n;
    printf("Value of n : ");
    scanf("%d", &n);
    while(n<=1000)
    {
        printf("%d\n", n);
        n++;

        if(n>100)
        {
            break;
        }
    }

    return 0;
}
