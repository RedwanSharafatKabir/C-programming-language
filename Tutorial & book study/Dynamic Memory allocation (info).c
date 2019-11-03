#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=malloc(sizeof(int));
    printf("%d\n",p);
    free(p);
    return 0;
}
