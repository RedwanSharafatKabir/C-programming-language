#include<stdio.h>
int main()
{
    int i, ft[5]={96,100,56,25,87}, st[5]={100,98,78,33,92}, final[5]={100,74,86,54,100};
    double total_marks[5];
    for(i=0;i<5;i++)
    total_marks[i]=(ft[i]/4.0)+(st[i]/4.0)+(final[i]/2.0);
    for(i=1;i<=5;i++)
    printf("Roll : %d\tTotal Marks : %.2lf\n", i,total_marks[i-1]);

    return 0;
}
