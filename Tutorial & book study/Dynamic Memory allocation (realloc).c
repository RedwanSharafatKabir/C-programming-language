#include<stdio.h>
#include<stdlib.h>
//void *malloc(size_t)

int main()
{
    int *p;
    p=(int *)malloc(10*sizeof(int));
    p[1]=5;
    printf("%d\n",p[1]);
    p=(int *)realloc(p,15*sizeof(int));
    printf("%d\n",p[1]);
    free(p);
    return 0;
}
