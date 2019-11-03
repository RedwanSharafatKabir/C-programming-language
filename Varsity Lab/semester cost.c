#include<stdio.h>
int main()
{
    int course,credits,cost,payment;
    printf("How many courses do you have ? ");
    scanf("%d",&course);
    printf("How many credits are there in each course ? ");
    scanf("%d",&credits);
    printf("What is your per credit cost ? ");
    scanf("%d",&cost);
    payment=course*credits*cost;
    printf("You have to pay %d$ per semester\n", payment);

    return 0;
}
