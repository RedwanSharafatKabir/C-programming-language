#include<stdio.h>
#include<stdlib.h>
int main()
{
    freopen("file_input.txt","r",stdin);
    freopen("file_contestant_output.txt","w",stdout);
    int n,i,fac=1;
    while(scanf("%d",&n)!=EOF){
        for(i=n;i>=1;i--){
        fac*=i;
        }
        printf("%d\n",fac);
        fac=1;
    }
    return 0;
}

