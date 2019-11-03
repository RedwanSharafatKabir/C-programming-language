#include<stdio.h>
int main()
{
    char ch;
    printf("Type a letter : ");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("\nThe letter %c is vowel\n", ch);
    }
    else
    {
        printf("\nThe letter %c is consonant\n", ch);
    }

    return 0;
}
