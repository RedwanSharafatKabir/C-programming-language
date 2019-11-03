#include<stdio.h>
int main()
{
    char chr[100];
    int i;
    printf("Type the letters : ",chr);
    while(gets(chr)!=EOF){                   /// here we can also use scanf("%[^\n]",chr);
    for(i=0;i<100;i++)
    {
      if(chr[i]>='a' && chr[i]<='z')
       {chr[i]='A'+(chr[i]-'a');}
      else if(chr[i]>='A' && chr[i]<='Z')
       {chr[i]='a'+(chr[i]-'A');}
    }
    printf("\n%s\n",chr);
    }
    return 0;
}
