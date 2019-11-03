#include<stdio.h>
int main()
{
    int published_article, total_fees;
    printf("Article published : ");
    scanf("%d", &published_article);
    total_fees=published_article*500;
    printf("Total monthly fees for one freelancer : %d\n", total_fees);

    return 0;
}
