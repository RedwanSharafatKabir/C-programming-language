#include<conio.h>
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
    printf("\n\t\t\t\tINFORMATION\n");
    printf("\t\t\t\t===========\n");
    for(i=0;i<n;i++){
        printf("\t%s %d %.2lf\n",student[i].name,student[i].ID,student[i].AGE);
    }
}
void input(struct info student[],int n)
{
    int i;
    printf("\n\t\t\t\tADMITION\n");
    printf("\t\t\t\t========\n");
    for(i=0;i<n;i++){
        printf("\n\t%d. Student Name: ",i+1);
        scanf("%s",student[i].name);
        printf("\t   Student ID: ");
        scanf("%d",&student[i].ID);
        printf("\t   Student Age: ");
        scanf("%lf",&student[i].AGE);
    }
}
void sort_AGE(struct info student[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(student[i].AGE==student[j].AGE){
                if(strcmp(student[i].name,student[j].name)!=0){
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
                else if(strcmp(student[i].name,student[j].name)==0){
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
            else if(student[i].AGE>student[j].AGE){
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
    printf("\n\t\t\t\t\t\t\t\t ======================\n");
    printf("\t\t\t\t\t\t\t\t| Students Information |\n");
    printf("\t\t\t\t\t\t\t\t ======================\n");
    printf("\n\tHow many students' will be admitted ? ");
    scanf("%d",&n);
    input(student,n);
    sort_AGE(student,n);
    output(student,n);
    return 0;
}
