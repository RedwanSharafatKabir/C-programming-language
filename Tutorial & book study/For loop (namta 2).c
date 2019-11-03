#include<stdio.h>
int main()
{
    int n, i=1;
    printf("Value of n : ");
    scanf("%d", &n);


    for( ; ; )
    {
        printf("\n%d * %d = %d\n", n, i, n*i);
        i++;
        if(i>10)
        {
            break;
        }
    }

    return 0;
}

