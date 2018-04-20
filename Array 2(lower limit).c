#include<stdio.h>
int main()
{
    int i, A[10]= {1,2,3,4,5,6,7,8,9,1559};
    for(i=10;i>0;i--)
    {
        printf("%dth number is %d\n", i,A[i-1]);
    }

    return 0;
}

