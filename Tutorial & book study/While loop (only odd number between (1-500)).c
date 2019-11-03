#include<stdio.h>
int main()
{
    int n;
    printf("Value of n : ");
    scanf("%d", &n);
    while(n<500)
    {
        n++;
        if(n%2==0)
        {
            continue;
        }
        printf("%d\n", n);
    }


    return 0;
}

