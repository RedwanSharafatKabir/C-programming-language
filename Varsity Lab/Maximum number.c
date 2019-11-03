#include <stdio.h>
void checker (int *a)
{
    int i ;
    int max=0;
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf ("%d\n",max);
}
int main ()
{
    int a[100];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    checker(a);
    return 0;
}
