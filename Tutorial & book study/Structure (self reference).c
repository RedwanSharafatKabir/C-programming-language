#include<stdio.h>
#include<string.h>
struct me
{
    int a;
    struct me *next;
};
void output(struct me *print)
{
    if(print->a==0)
        return ;
    /// output(print->next);             ///  To print reversely.
    printf("%d ",print->a);
    output(print->next);
}
int main()
{
    struct me var1,var2,var3,var4;
    scanf("%d",&var1.a);
    var1.next=&var2;
    scanf("%d",&var2.a);
    var2.next=&var3;
    scanf("%d",&var3.a);
    var3.next=&var4;
    scanf("%d",&var4.a);
    output(&var1);
    printf("\n");
    return 0;
}
