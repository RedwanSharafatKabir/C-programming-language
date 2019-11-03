#include<stdio.h>
int main()
{
    int i, j, temp, A[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0,j=9;i<10;i++,j--)
    {
        temp=A[j];
        A[j]=A[i];
        A[i]=temp;
    }
    for(j=9;j>=0;j--)
    {
        printf("%d\n", A[j]);
    }

    return 0;
}
