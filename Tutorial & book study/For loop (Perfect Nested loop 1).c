#include<stdio.h>           /// এই নেস্টেড লুপ এর প্রত্যেক লাইন এ  a, b,c অসমান হবে ///
int main()
{
    int a, b, c;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=3;b++)
        {
            for(c=1; c<=3; c++)
            {
                if(b!=a && c!=b && c!=a)
                {
                    printf("\n%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
