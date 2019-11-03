#include <stdio.h>
int main()
{
   int a,m,n,i,j,fuck;
   while(scanf("%d%d",&m,&n)==2)
   if(m<n)
   {
    for(i=m; i<=n; i++)
    {
     a=i;
     fuck=1;
     if(a==1)
        fuck=0;
     for(j=2; j<a; j++)
     {
      if(a%j==0)
         fuck=0;
     }
     if(fuck==1)
         printf("%d ",a);
    }
   }
  else
  {
    for(i=m; i>=n; i--)
    {
      a=i;
      fuck=1;
      if(a==1)
         fuck=0;
      for(j=2; j<a; j++)
      {
        if(a%j==0)
          fuck=0;
      }
      if(fuck==1)
         printf("%d ",a);
    }
  }
  return 0;
}
