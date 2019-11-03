#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char* p;
    p=(char *)calloc(10,sizeof(char));
    //strcpy(p,"ABCDEFGHIJ");
    gets(p);
    printf("%s\n",p);
    p=(char *)realloc(p,5*sizeof(char));
    printf("%s\n",p);
    free(p);
    return 0;
}

