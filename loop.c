#include<stdio.h>
int main()
{
    int i;
    for(i=10;i<=19;i++){
    if(i==15){
        continue ;
    }
    if(i==19){
        break ;
    }
    printf("%d\n", i);
    }

    return 0;
}
