#include<stdio.h>     /// এই নেস্টেড লুপ এ  a, b,c কোনটাই সমান হবে না ///
int main()
{
    int a, b, c;
    for(a=1; a<=3; a++)
    {
        for(b=1; b<=3 && b!=a; b++)
        {
            for(c=1; c<=3 && c!=b && c!=a; c++)
            {
                printf("\n%d, %d, %d\n", a, b, c);
            }
        }
    }

    return 0;
}
