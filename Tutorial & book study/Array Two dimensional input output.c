#include<stdio.h>
int main()
{
    int A[100][100],i,j,a,b,sum=0,x,y,m;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&A[i][j]);
        }
    }
    x=0;
    y=0;
    while(x<a){
    for(m=1;m<=a;m++){
    for(i=x,j=y;j<b;j++){
            sum+=A[i][j];
    }
    if(x==0)
        printf("\nSum of %dst row is = %d\n",m,sum);
    else if(x==1)
        printf("\nSum of %dnd row is = %d\n",m,sum);
    else if(x==2)
        printf("\nSum of %drd row is = %d\n",m,sum);
    else
        printf("\nSum of %dth row is = %d\n",m,sum);
    sum=0;
    x++;
    }
    }
    return 0;
}
