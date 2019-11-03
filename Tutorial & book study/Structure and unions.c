#include<stdio.h>
#include<string.h>
struct info
{
    char name[100];
    char ID[100];
    char CGPA[100];
};
int main()
{
    struct info a[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Name: ");
        scanf("%s",a[i].name);
        printf("ID No. ");
        scanf("%s",a[i].ID);
        printf("CGPA: ");
        scanf("%s",a[i].CGPA);
    }
    for(i=0;i<n;i++){
        printf("%s %s %s\n",a[i].name,a[i].ID,a[i].CGPA);
    }
    return 0;
}
