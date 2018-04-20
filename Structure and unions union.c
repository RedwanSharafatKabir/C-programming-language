#include<stdio.h>
#include<string.h>
struct me_structure
{
    double a;
    int b;
    char c[];
};
union me_union
{
    double a;
    int b;
    char c[100];
};
int main()
{
    union me_union sub;
    ///struct me_structure sub;
    scanf("%lf%d%s",&sub.a,&sub.b,sub.c);
    printf("%.2lf %d %s\n",sub.a,sub.b,sub.c);
    return 0;
}
