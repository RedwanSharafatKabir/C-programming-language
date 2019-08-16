#include<stdio.h>
int main()
{
    int a,b,j=1,i;
    scanf("%d\n%d",&a,&b);
    while(j<=a)
    {
    for(i=1;i<=b;i++){
      printf("%d", i);
    }
      j++;
      printf("\n");
    }

    return 0;
}


