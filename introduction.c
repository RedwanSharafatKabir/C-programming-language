#include<stdio.h>
#include<string.h>
int main()
{
  char s[100]="how are you??";
  char s1[100];
  char s2[100]="fine";
  int ln;
  printf("%s\n",s);
  scanf("%[^\n]",s1);
  ln=strspn(s1,s2);
  if(ln==4)
      printf("yes\n");
   else
      printf("no\n");
  return 0;
}
