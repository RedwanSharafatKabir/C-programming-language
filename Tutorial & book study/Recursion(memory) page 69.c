#include<stdio.h>
void rec()
{
    char *n="Wow, I'm learning recursion!";
    printf("%s\n",n);
    rec();
}
int main()
{
    rec();
    return 0;
}
