#include "my_header_file.h"
int main()
{
    char a[]="Hello", b[]="World";
    printf("%s",strcat(a," "));
    printf("%s\n",b);
    printf("%d\n",strlen(strcat(a,b)));
    return 0;
}
