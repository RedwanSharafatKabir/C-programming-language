#include<stdio.h>
int main()
{
    int i=1, n;
    printf("Which digit's namta ? ");
    scanf("%d", &n);
    while(i<=10)
    {
        printf("\n%d * %d = %d\n", n, i, n*i);
        i++;
    }

    return 0;
}
