#include<conio.h>
#include<stdio.h>
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
    char pass1[100];
    printf("Pass: ");
    password(pass1);
    printf("\n%s\n",pass1);
    return 0;
}
