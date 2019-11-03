#include<stdio.h>
int main()
{
    int S, i, N;
    char option;
    do {
        printf("\nN= ");
        scanf("%d", &N);
        S=0;
        for(i=1; i<=N; i+=1)
            S=S+i*i;
        printf("\n1^2+2^2+3^2+.....+N^2= %d", S);

        printf("\nContinue: Y/N?\n");
        option=getche();
       }
        while (option=='Y');

    return 0;
}
