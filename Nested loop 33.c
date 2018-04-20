#include<stdio.h>
int main()
{
    int a,b,n;
    for(n=1;n<=5;n++)
    {
      scanf("%d%d",&a,&b);
      while(a<=b)
      {
        printf("%d ",a++);
      }
        printf("\n");
    }

    return 0;
}

