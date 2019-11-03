#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
struct node* temp;
struct node* temp1;
struct node* temp2;
void insert(int x, int n)
{
    int i;
    temp1=(struct node*)malloc(sizeof(struct node));              /// new node();
    temp1->data=x;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return ;
    }
    temp2=head;
    for(i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
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
    int i,n,p,x;
    head=NULL;
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d%d",&x,&n);
        insert(x,n);
        output();
    }
    return 0;
}
