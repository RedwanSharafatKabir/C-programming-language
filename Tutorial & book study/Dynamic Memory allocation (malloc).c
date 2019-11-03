#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int *)malloc(15*sizeof(int));
    p[1]=5;
    printf("%d\n",p[1]);
    free(p);
    return 0;
}

