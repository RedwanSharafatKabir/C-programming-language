#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
struct node* temp;                      /// globally declared.
void insert(int x)
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void output()
{
    temp=head;
    while(temp!=NULL){
         printf("%d ",temp->data);
         temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
    int i,n,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        insert(x);
        output();
    }
    return 0;
}

