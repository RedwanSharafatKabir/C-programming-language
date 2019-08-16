#include<stdio.h>
#include<string.h>
int main()
{
    int  math1[100],math2[100],math3[100],math4[100];
    char name[100];
    char name1[100]="addition";
    char name2[100]="subtraction";
    char name3[100]="multiplication";
    char name4[100]="division";
    int  i,j,n,m,ck1,ck2,ck3,ck4,sum,sub;
    float result1,result2;
    printf("Munna           \"CALCULATOR\"          Munna\n\n");
    while(1)
    {
        sum=0;
        result1=1;
        printf("what you want to calcutale: addition/subtraction/multiplication/division.\n");
        printf("please enter any name what you want: ");
        scanf("%s",name);

        ck1=strcmp(name,name1);
        ck2=strcmp(name,name2);
        ck3=strcmp(name,name3);
        ck4=strcmp(name,name4);

        if(ck1==0)
        {
        printf("how many number you want to calculate: ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
           {
              printf("%d number: ",i);
              scanf("%d",&math1[i]);
           }
        for(i=1; i<=n; i++)
            {
                printf("%d + ",math1[i]);
                sum=sum+math1[i];
            }
            printf("= %d\n\n",sum);
        }
        else if(ck2==0)
        {
            printf("1st number: ");
            scanf("%d",&math2[0]);
            printf("2nd number: ");
            scanf("%d",&math2[1]);
            sub=math2[0]-math2[1];
            printf("%d - %d = %d\n\n",math2[0], math2[1],sub);
        }
        else if(ck3==0)
        {
            printf("how many number you want to calculate: ");
            scanf("%d",&m);
            for(j=1; j<=m;j++)
            {
                printf("%d number: ",j);
                scanf("%d",&math3[j]);
            }
            for(j=1; j<=m;j++)
            {
               printf("%d * ",math3[j]);
               result1= result1* (float)math3[j];
            }
            printf("= %.2f\n\n",result1);
        }
            else if(ck4==0)
            {
                printf("jake vag dibe: ");
                scanf("%d",&math4[0]);
                printf("ja diye dibe: ");
                scanf("%d",&math4[1]);
                result2=(float)math4[0]/(float)math4[1];
                printf("%.2f / %.2f = %.2f\n\n",(float)math4[0],(float)math4[1],result2);
            }
        else
            printf("Sorry. You have written wrong word.\n\n");
    }
    return 0;
}
