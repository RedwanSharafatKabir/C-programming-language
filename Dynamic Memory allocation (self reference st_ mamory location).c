#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct me
{
    int a;
    struct me *next;
};
void output(struct me *print)
{
    if(print==NULL){
        printf("NULL\n");
        return ;
    }
    printf("%d\n",print->a);
    output(print->next);
//      while(1)
//      {
//          if(print==NULL){
//             printf("NULL\n");
//             return ;
//          }
//          printf("%d\n",print->a);
//          print=print->next;
//      }
}
int main()
{
    struct me *start, *end, *n;
    int i,x;
    printf("I = ");
    scanf("%d",&i);
    start=NULL;
    end=NULL;
    n=NULL;
    /// output(n);
    while(i--){
        if(start==end && start==NULL){
            n=(struct me *)malloc(sizeof(struct me));
            scanf("%d",&x);
            n->a=x;
            n->next=NULL;
            start=end=n;
        }
        else {
            n=(struct me *)malloc(sizeof(struct me));
            scanf("%d",&x);
            n->a=x;
            n->next=NULL;
            end->next=n;
            end=n;
        }
    }
    output(start);
    return 0;
}
