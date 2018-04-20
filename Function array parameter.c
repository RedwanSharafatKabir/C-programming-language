#include<stdio.h>
int m,n;
void name(int x[m][n])
{
    printf("Function: %d\n",x[0][2]);
}
int main()
{
    int a[5][5],i,j,b,m,n;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Main: %d\n",a[1][2]);
    name(a);
    return 0;
}
