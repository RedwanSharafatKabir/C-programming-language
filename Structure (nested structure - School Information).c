#include<conio.h>
#include<stdio.h>
#include<string.h>
struct birthdate
{
    int day;
    int month;
    int year;
}birth;
struct Sex
{
    int male;
    int female;
}sex;
struct student
{
    char first_name[100];
    char last_name[100];
    struct birthdate birth;
    struct Sex sex;
};
struct teacher
{
    char first_name[100];
    char last_name[100];
    struct birthdate birth;
    struct Sex sex;
    int salary;
};
void output(struct student info[], struct teacher inf[])
{
    int i;
    for(i=0;i<2;i++){
        if(i==0){
        printf("\n\t\t\t<===> %s %s was born in %d-%d-%d ",info[i].first_name,info[i].last_name,info[i].birth.day,info[i].birth.month,info[i].birth.year);
        if(info[i].sex.male==1)
        printf("is Male <===>\n");
        else if(info[i].sex.female==1)
        printf("is Female <===>\n");
        }
        if(i==1){
        printf("\n\t\t\t<===> %s %s was born in %d-%d-%d ",inf[i].first_name,inf[i].last_name,inf[i].birth.day,inf[i].birth.month,inf[i].birth.year);
        if(inf[i].sex.male==1){
        printf("is Male <===>\n");
        printf("\t\t\t<===> His Salary is %d$\n",inf[i].salary);
        }
        else if(inf[i].sex.female==1){
        printf("is Female <===>\n");
        printf("\t\t\t      Her Salary is %d\n",inf[i].salary);
        }
        }
    }
}
int main()
{
    struct student info[100];
    struct teacher inf[100];
    char gend[10];
    int i;
    for(i=0;i<2;i++){
        if(i==0){
          printf("\n\tStudent Information");
          printf("\n\t===================");
        ///
        printf("\n\n\tFirst Name: ");
        scanf("%s",info[i].first_name);
        printf("\tLast Name: ");
        scanf("%s",info[i].last_name);
        ///
        printf("\tBirth Date - ");
        printf("Day: ");
        scanf("%d",&info[i].birth.day);
        printf("\t\t     Month: ");
        scanf("%d",&info[i].birth.month);
        printf("\t\t     Year: ");
        scanf("%d",&info[i].birth.year);
        printf("\tSex ( Male - 'm/M', Female - 'f/F'): ");
        scanf("%s",gend);
        if(strcmp(gend,"m")==0||strcmp(gend,"M")==0){
            info[i].sex.male=1;
            info[i].sex.female=0;
        }
        else if(strcmp(gend,"f")==0||strcmp(gend,"F")==0){
            info[i].sex.male=0;
            info[i].sex.female=1;
        }
        else {
            printf("\tInvalid Keyword.......\n");
            printf("\tSex ( Male - 'm/M', Female - 'f/F'): ");
                 scanf("%s",gend);
            if(strcmp(gend,"m")==0||strcmp(gend,"M")==0){
                info[i].sex.male=1;
                info[i].sex.female=0;
            }
            else if(strcmp(gend,"f")==0||strcmp(gend,"F")==0){
                info[i].sex.male=0;
                info[i].sex.female=1;
            }
        }
        }
        ///
        else if(i==1){
          printf("\n\tTeacher Information");
          printf("\n\t===================");
        ///
        printf("\n\n\tFirst Name: ");
        scanf("%s",inf[i].first_name);
        printf("\tLast Name: ");
        scanf("%s",inf[i].last_name);
        ///
        printf("\tBirth Date - ");
        printf("Day: ");
        scanf("%d",&inf[i].birth.day);
        printf("\t\t     Month: ");
        scanf("%d",&inf[i].birth.month);
        printf("\t\t     Year: ");
        scanf("%d",&inf[i].birth.year);
        printf("\tSex ( Male - 'm/M', Female - 'f/F'): ");
        scanf("%s",gend);
        if(strcmp(gend,"m")==0||strcmp(gend,"M")==0){
            inf[i].sex.male=1;
            inf[i].sex.female=0;
        }
        else if(strcmp(gend,"f")==0||strcmp(gend,"F")==0){
            inf[i].sex.male=0;
            inf[i].sex.female=1;
        }
        else {
            printf("\tInvalid Keyword.......\n");
            printf("\tSex ( Male - 'm/M', Female - 'f/F'): ");
                 scanf("%s",gend);
            if(strcmp(gend,"m")==0||strcmp(gend,"M")==0){
                inf[i].sex.male=1;
                inf[i].sex.female=0;
            }
            else if(strcmp(gend,"f")==0||strcmp(gend,"F")==0){
                inf[i].sex.male=0;
                inf[i].sex.female=1;
            }
        }
        printf("\tSalary: ");
        scanf("%d",&inf[i].salary);
        }
    }
    output(info,inf);
    return 0;
}

