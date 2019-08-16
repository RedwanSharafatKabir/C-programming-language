#include<stdio.h>
int main()
{
    int i=1, N, S;
    printf("Value of N : ");
    scanf("%d", &N);
    S=0;
    for(; i<=N; i++)
       S=S+i;
       printf("\n1+2+3+4+5+.....+N = %d\n", S);


    return 0;
}
