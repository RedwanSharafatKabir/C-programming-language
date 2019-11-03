#include<stdio.h>
int main()
{
    int i, A[10]= {10,9,8,7,6,5,4,3,2,1};
    for(i=0;i<10;i++)
    {
        printf("%dth number is %d\n", i+1,A[i]);
    }

    return 0;
}

