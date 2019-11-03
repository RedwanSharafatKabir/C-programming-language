#include<stdio.h>
int main()
{
    int n1,n2, n;
    printf("\nEter the first number: ");
    scanf("%d",&n1);
    printf("\nEnter the second number: ");
    scanf("%d",&n2);
    if(n1<n2)
        n=n1;
    else
        n=n2;
    home:if(n1%n==0 && n2%n==0)
         printf("\nGreatest common divisor of %d and %d is %d\n",n1,n2,n);
         else
         {
             n--;
             goto home;
         }

         return 0;
}
