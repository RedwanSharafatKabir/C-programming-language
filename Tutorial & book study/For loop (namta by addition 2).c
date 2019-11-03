#include<stdio.h>
int main()
{
    int n, m=0, i=1;
    printf("Value of n : ");
    scanf("%d", &n);
    for( ; n<=20; n++ )
    {
        for( ; i<=10; )
        {
            m = m+n;
            printf("\n%d * %d = %d\n", n, i, m);
            i++;
        }
    }

    return 0;
}
