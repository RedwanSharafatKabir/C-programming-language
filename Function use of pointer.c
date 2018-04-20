#include<stdio.h>
int increament(int *p)
{
    (*p)++;
    return *p;
}
int main()
{
    int p;
    scanf("%d",&p);
    printf("%d\n",p);
    increament(&p);
    printf("%d\n",p);
    return 0;
}

