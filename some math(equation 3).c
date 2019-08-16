#include<stdio.h>
int main()
{
    printf("\n Ques. If, a1x + b1y = c1 & a2x = b2y = c2 \n       Find out the value of x & y ? ");
    int a1, a2, b1, b2, c1, c2, sum, x, y;
    printf("\n\n\n Soln. a1 = ");
    scanf("%d", &a1);
    printf("\n       a2 = ");
    scanf("%d", &a2);
    printf("\n       b1 = ");
    scanf("%d", &b1);
    printf("\n       b2 = ");
    scanf("%d", &b2);
    printf("\n       c1 = ");
    scanf("%d", &c2);
    printf("\n       c2 = ");
    scanf("%d", &c2);
    sum = a1*b2-a2*b1;
    if(sum==0)
    {
        printf("\n       Ans. x & y are undefined.\n");
    }
    else
     {
        x=(b2*c1-b1*c2)/sum;
        y=(a1*c2-a2*c1)/sum;
        printf("\n       Ans. x = %d & y = %d .\n", x, y);
     }

    return 0;
}
