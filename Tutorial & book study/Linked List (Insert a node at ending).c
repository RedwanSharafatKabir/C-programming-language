#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *temp;
struct node *temp1;
struct node *temp2;               /// globally declared.
void insert(int x,int i)
{
    int j;
    temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    if(i==0)
       head=temp1;
    else {
       temp2=head;
       for(j=0;j<i-1;j++){
           temp2=temp2->next;
       }
    temp2->next=temp1;
    }
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
    int i,n,x;
    head=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        insert(x,i);
        output();
    }
    return 0;
}

