#include<stdio.h>
int main()
{
    char letter;
    printf("Write down letter : ");
    scanf("%c", &letter);
    if(letter>='a' && letter<='z')
    {
        printf("%c is lower case\n", letter);
    }
    else
    {
        printf("%c is upper case\n", letter);
    }

    return 0;
}
