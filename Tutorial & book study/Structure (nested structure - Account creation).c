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
struct info
{
    char first_name[100];
    char last_name[100];
    char user_name[100];
    char pass[20];
    struct birthdate birth;
    struct Sex sex;
};
void output(struct info account_member[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("\n\t\t\t<===> %s %s %s %d-%d-%d ",account_member[i].first_name,account_member[i].last_name,account_member[i].user_name,
               account_member[i].birth.day,account_member[i].birth.month,account_member[i].birth.year);
        if(account_member[i].sex.male==1)
        printf(" Male <===>\n");
        else if(account_member[i].sex.female==1)
        printf(" Female <===>\n");
    }
}
void password(char pass[])
{
    int i=0;
    char a;
    while(1)
    {
        a=getch();
        if(a==13)
            break ;
        putchar('*');
        pass[i++]=a;
    }
    pass[i]='\0';
}
int main()
{
    struct info account_member[100];
    char gend[10],pass1[10],pass2[10];
    int n,i;
    printf("\t\tHow many clients want to creat account ? ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0){
          printf("\n\t%dst Person",i+1);
          printf("\n\t==========");
        }
        else if(i==1){
          printf("\n\t%dnd Person",i+1);
          printf("\n\t==========");
        }
        else if(i==2){
          printf("\n\t%drd Person",i+1);
          printf("\n\t==========");
        }
        else {
          printf("\n\t%dth Person",i+1);
          printf("\n\t==========");
        }
        printf("\n\n\tFirst Name: ");
        scanf("%s",account_member[i].first_name);
        printf("\tLast Name: ");
        scanf("%s",account_member[i].last_name);
        printf("\tUser Name: ");
        scanf("%s",account_member[i].user_name);
        printf("\tEnter Password: ");
        password(pass1);
        //scanf("%s",account_member[i].pass);
        printf("\n\tConfirm Password: ");
        password(pass2);
        //scanf("%s",pass2);
        if(strcmp(pass1,pass2)!=0){
            printf("\n\tWrong.......\n");
            printf("\tEnter a New Password: ");
                 password(pass1);
            printf("\n\tConfirm Password: ");
                 password(pass2);
        }
        printf("\n\tBirth Date - ");
        printf("Day: ");
        scanf("%d",&account_member[i].birth.day);
        printf("\t\t     Month: ");
        scanf("%d",&account_member[i].birth.month);
        printf("\t\t     Year: ");
        scanf("%d",&account_member[i].birth.year);
        printf("\tSex ( Male - 'm/M', Female - 'f/F'): ");
        scanf("%s",gend);
        if(strcmp(gend,"m")==0||strcmp(gend,"M")==0){
            account_member[i].sex.male=1;
            account_member[i].sex.female=0;
        }
        else if(strcmp(gend,"f")==0||strcmp(gend,"F")==0){
            account_member[i].sex.male=0;
            account_member[i].sex.female=1;
        }
        else {
            printf("\tInvalid Keyword.......\n");
            printf("\tSex ( Male - 'm/M', Female - 'f/F'): ");
                 scanf("%s",gend);
            if(strcmp(gend,"m")==0||strcmp(gend,"M")==0){
                account_member[i].sex.male=1;
                account_member[i].sex.female=0;
            }
            else if(strcmp(gend,"f")==0||strcmp(gend,"F")==0){
                account_member[i].sex.male=0;
                account_member[i].sex.female=1;
            }
        }
    }
    output(account_member,n);
    return 0;
}
