#include<stdio.h>
int main()
{
    int n;
    printf("Value of n : ");
    scanf("%d", &n);
    while(n<=10)
    {
        printf("%d\n", n++);
    }

    return 0;
}
