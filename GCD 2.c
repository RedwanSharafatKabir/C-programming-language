#include<stdio.h>
int main()
{
    int n1, n2, x;
    printf("first number : ");
    scanf("%d", &n1);
    printf("\nsecond number : ");
    scanf("%d", &n2);
    if(n1<n2)
    {
        x=n1;
    }
    else {
          x=n2;
    }
    for(; x>=1; x--)
    {
        if(n1%x==0 && n2%x==0)
        {
            printf("\nThe GCD is : %d\n", x);
            break;
        }
    }

    return 0;
}
