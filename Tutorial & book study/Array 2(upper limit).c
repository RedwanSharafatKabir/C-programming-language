#include<stdio.h>
int main()
{
    int i, A[10]= {1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<10;i++)
    {
        printf("%dth number is %d\n", i+1,A[i]);
    }

    return 0;
}
