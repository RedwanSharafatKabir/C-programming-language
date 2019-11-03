#include<stdio.h>
int name(int a,int b)
{
    extern int x;    ///  extern variable এক ধরণের স্থায়ী ভেরিয়েবল , তাই  x এর মান main() ফাংশনে পরিবর্তন হয় নি   ///
    x=a+b;
    return x;
}
int x=105;
int main()
{
    int s,t,sum;
    scanf("%d%d",&s,&t);
    sum=name(s,t);
    printf("%d %d\n",sum,x);
    return 0;
}
