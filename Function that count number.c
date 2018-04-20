#include<stdio.h>
#include<string.h>
int name(char x[],char let)
{
    int i,count=0;
    for(i=0;i<strlen(x);i++){           /// এখানে  for(i=0;x[i]!='\0';i++) লিখলেও হবে   ///
        if(x[i]==let)
        count++;
    }
    return count;
}
int main()
{
    int i,result;
    char a[100],letter;
    while(scanf("%s%*c%c%*c",a,&letter)!=EOF){
    /// result=name(a,letter);
    printf("%d\n",name(a,letter));
    }
    return 0;
}
