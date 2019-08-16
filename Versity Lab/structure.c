#include <stdio.h>
#include <string.h>
struct info
{
    char name[50];
    char id[50];
    int position;
};

int main()
{
    struct info std1, std2 ;
    strcpy (std1.name,"Ayon") ;
    scanf ("%d",&std1.position) ;
    printf ("%s\n",std1.name) ;
    printf ("%d\n",std1.position) ;
    return 0;
}
