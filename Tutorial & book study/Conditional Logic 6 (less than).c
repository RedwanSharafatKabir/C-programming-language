#include<stdio.h>
int main()
{
    int n;
    printf("Value of n : ");
    scanf("%d", &n);
    if(n<30)
    {
        printf("\nn is less than 30\n");
    }
    else if(n<50)
    {
        printf("\nn is less than 50\n");
    }

    return 0;
}
