#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    int b,l,u;
    a=getchar();
    if(iscntrl(a))
        puts("Can't Print");
  ///  else if(isprint(a))
  ///      puts("Printed");
    else if(ispunct(a))
        puts("Punctuation");
    else if(isspace(a))
        puts("Space Bar");
    else if(isdigit(a))
        puts("Digit");
  ///  else if(isalnum(a))            /// Alpha Numeric = 0-9 , A-Z , a-z .
  ///      puts("Alpha Numeric");
  ///  else if(isalpha(a))            /// Alphabet = Only A-Z and a-z .
  ///      puts("Alphabet");
    else if(islower(a))
        puts("Lower Case");
    else if(isupper(a))
        puts("Upper Case");
    b=toascii(a);
    l=tolower(a);
    u=toupper(a);
    printf("\nAscii Value of %c is: %d\n",a,b);
    printf("\nLower Case of %c is: %c\n",a,l);
    printf("\nUpper Case of %c is: %c\n",a,u);
    return 0;
}
