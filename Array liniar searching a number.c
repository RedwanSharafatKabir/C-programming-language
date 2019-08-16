#include<stdio.h>
int main()
{
    int Ara[100],i,n,key;
    printf("Input array value : ");
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++){scanf("%d", &Ara[i]);}
        printf("\nWhich number do you want to search ? ");
        scanf("%d",&key);
        for(i=0;i<n;i++){
            if(Ara[i]==key)
            break ;
        }
        if(i==n)
            printf("Invalid number\n");
            else
            printf("Position : %d\n",i+1);
    }
    return 0;
}
