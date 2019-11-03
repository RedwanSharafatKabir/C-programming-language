#include<stdio.h>     /// এক থেকে পাঁচ পর্যন্ত অঙ্ক তিনটি করে প্রতিবার পুনরাবৃত্তি না করে কতবার লেখা যায়  ???   ///
int main()
{
    int a, b, c;
    for(a=1; a<=5; a++)
    {
        for(b=1; b<=5; b++)
        {
            for(c=1; c<=5; c++)
            {
                if(b!=a && c!=a && c!= b)
                {
                    printf("\n%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
