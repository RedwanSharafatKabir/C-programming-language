#include<stdio.h>
int main()
{
    int a,j=1,i;
    scanf("%d",&a);
    while(j<=a)
    {
    for(i=1;i<=j;i++){
        if(j==1||j==a||i==1||i==j){
           printf("%d",i);
        }
        else{
            printf(" ");
        }
    }
      j++;
      printf("\n");
    }

    return 0;
}




