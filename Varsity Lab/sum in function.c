#include <stdio.h>
int array(int *a,int size)
{
    int i,total=0;
    for (i=0;i<size;i++)
    {
        total=total+*(a+i);
    }
    return total;
}
int main ()
{
    int a[100],i,total;
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    array (a,5);
    total=array(a,5);
    printf("%d\n",total);
    return 0;
}
