#include<stdio.h>
#include<string.h>
struct info
{
    char name[100];
    int ID;
    double CGPA;
};
void Output(struct info student[100],int n)
{
    int i;
    for(i=0;i<n;i++){
    printf("%s %d %.2lf\n",student[i].name,student[i].ID,student[i].CGPA);
    }
}
int main()
{
    struct info student[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Name: ");
    scanf("%s",student[i].name);
    printf("ID: ");
    scanf("%d",&student[i].ID);
    printf("SGPA: ");
    scanf("%lf",&student[i].CGPA);
    }
    printf("\n");
    Output(student,n);
    return 0;
}
