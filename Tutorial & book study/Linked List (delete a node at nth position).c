#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *temp;
struct node *temp1;
struct node *temp2;
void insert(int x, int i)
{
    int j;
    temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    if(i==1)
        head=temp1;
    else {
        temp2=head;
        for(j=0;j<i-2;j++){
            temp2=temp2->next;
        }
        temp2->next=temp1;
    }
}
void erase(int position)
{
    int i;
    temp=head;
    if(position==1){
        head=temp->next;
        free(temp);
        return;
    }
    for(i=0;i<position-2;i++){
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
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
    int i,n,x,position;
    head=NULL;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        insert(x,i);
        output();
    }
    scanf("%d",&position);
    erase(position);
    output();
    return 0;
}

