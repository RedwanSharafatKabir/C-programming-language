#include <stdio.h>
#include <string.h>
struct info
{
    char name[50];
};
void input (char name[50])
{
    scanf ("%s",name) ;

}
int main()
{
    struct info std1 ;
    input(std1.name) ;
    printf ("%s\n",std1.name) ;
    return 0;
}

