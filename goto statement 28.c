#include<stdio.h>
int main()
{
    int a=1;
    here :
        printf("%d\n", a);
        a++;
        if(a<=7)
        goto here;

    return 0;
}
