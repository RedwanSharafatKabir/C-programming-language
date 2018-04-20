#include<stdio.h>
#include<string.h>
struct me
{
    int a;
    float b;
    double k;
    char c;
    char d;
    char e;
    char f;
    char g;
    char h;
    char i;
    char t;
    char s;
};
int main()
{
    struct me sub;
    printf("%d",sizeof(sub));
    return 0;
}
