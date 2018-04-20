#include <stdio.h>
int main()
{
    int array[100],n,check,i,key,location;
    printf("input a tue koyta number dibi, tara tari de: ");
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d ta number nibi...? thik ase, ak ak kore de: ",n);
        for(i=0; i<n; i++)
            scanf("%d",&array[i]);
        printf("akhun bol amk kon number khuje ber korte hobe: ");
        scanf("%d",&key);
        check=0;
        for(i=0; i<n; i++)
        {
            if(array[i]==key)
            {
                check=1;
                location=i+1;
            }
        }
        if(check==1)
            printf("tera redwan dekhte passish na %d tue %d number a disish.\n",key, location);
        else
            printf("shala bodna tue to %d ai number dish e ni.\n",key);
    }
    return 0;
}
