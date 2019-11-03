#include<stdio.h>
int main()
{
    int i=1, N, S;
    char option;
 do{
    printf("\n\nValue of N : ");
    scanf("%d", &N);
    S=0;
    for(; i<=N; i=i+2)
       S=S+i;
       printf("\n1+3+5+...+N = %d\n", S);

       printf("\nContinue ? Y/N\n");
       option=getche();
   }

     while (option=='Y');

    return 0;
}
