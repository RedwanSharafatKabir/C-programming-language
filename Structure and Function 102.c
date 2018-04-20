#include<stdio.h>
struct me
{
    int x;
    double y;
};
void output(struct me print)
{
    printf("X = %d\n",print.x);
    printf("Y = %.2lf\n",print.y);
}
void output2(struct me print2)
{
    printf("X+X = %d\n",print2.x);
    printf("Y+Y = %.2lf\n",print2.y);
}
struct me add(struct me a,struct me b)
{
    struct me result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    return result;
};
int main()
{
    struct me value,value1;
    scanf("%d",&value.x);
    scanf("%lf",&value.y);
    output(value);
    value1=value;
    output2(add(value,value1));
    return 0;
}


