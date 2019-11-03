#include<stdio.h>
int main()
{
    char ch[100];
    while(gets(ch)){     /// here we can also use scanf("%[^\n]",chr); but scanf kokhono new line er pore terminate kore na ///
        if(ch[0]=='\0') return 0;
        printf("%s\n",ch);
    }
    return 0;
}
