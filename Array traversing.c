#include<stdio.h>
int main()
{
    int A1[10]={2,3,4,1,0,9,8,7,6,5},A2[10],i,j;
    for(j=9,i=0;i<10;i++,j--){
        A2[j]=A1[i];
    }
    for(i=0;i<10;i++){
        printf("%d\n",A2[i]);
    }
    return 0;
}
