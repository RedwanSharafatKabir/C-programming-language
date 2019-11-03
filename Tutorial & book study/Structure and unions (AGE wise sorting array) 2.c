#include<stdio.h>
#include<string.h>
struct info
{
    char name[100];
    int ID;
    double AGE;
};
void output(struct info student[],int n)
{
    int i;
    printf("\t\t\t\tOUTPUT\n");
    printf("\t\t\t\t======\n");
    for(i=0;i<n;i++){
        printf("\t%d %s %.2lf\n",student[i].ID,student[i].name,student[i].AGE);
    }
}
void input(struct info student[],int n)
{
    int i;
    printf("\t\t\t\tINPUT\n");
    printf("\t\t\t\t=====\n");
    for(i=0;i<n;i++){
        printf("\tStudent Name: ");
        scanf("%s",student[i].name);
        printf("\tStudent ID: ");
        scanf("%d",&student[i].ID);
        printf("\tStudent Age: ");
        scanf("%lf",&student[i].AGE);
    }
}
void sort_ID(struct info student[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(student[i].ID>student[j].ID){
                struct info temp;
                strcpy(temp.name,student[i].name);
                temp.ID=student[i].ID;
                temp.AGE=student[i].AGE;
                ///
                strcpy(student[i].name,student[j].name);
                student[i].ID=student[j].ID;
                student[i].AGE=student[j].AGE;
                ///
                strcpy(student[j].name,temp.name);
                student[j].ID=temp.ID;
                student[j].AGE=temp.AGE;
            }
        }
    }
}
int main()
{
    struct info student[100];
    int n;
    printf("\tHow many students' information will be inserted ? ");
    scanf("%d",&n);
    input(student,n);
    sort_ID(student,n);
    output(student,n);
    return 0;
}

