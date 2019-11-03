#include<stdio.h>
void rec(int count)
{
    if(count>5){
        return ;
    }
    printf("Count : %d\n",count);
    rec(count+1);
}
int main()
{
    rec(1);
    return 0;
}

