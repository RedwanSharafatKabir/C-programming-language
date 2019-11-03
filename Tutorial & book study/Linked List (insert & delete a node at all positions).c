#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* head;
struct node* point;
struct node* temp;
struct node* temp1;
struct node* temp2;
void Insert_At_Begining(int x)
{
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head = temp;
}
void Insert_At_Ending(int x)
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
        point = temp;
        return ;
    }
    point -> next = temp;
    point = temp;
}
void Insert_At_Nth_Position(int x, int n)
{
    int i;
    temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = NULL;
    if(n == 1){
        temp -> next = head;
        head = temp;
        return ;
    }
    temp1 = head;
    for(i = 1; i <=n-2; i++){
        temp1 = temp1 -> next;
    }
    temp -> next = temp1 -> next;
    temp1 -> next = temp;
}
void Delete_At_Nth_Position(int n)
{
    int i;
    temp = head;
    for(i = 0; i < n-2; i++){
        temp = temp -> next;
    }
    temp1 = temp -> next;
    temp -> next = temp -> next -> next;
    free(temp1);
}
/* void Delete_Value(int x)
{
    bool ck = false;
    node* temp = head;
    while(temp -> next != NULL){
        if(temp -> next -> data == x){
            ck = true;
            break ;
        }
        temp = temp -> next;
    }
    if(ck){
        node* temp1 = temp -> next;
        temp -> next = temp -> next -> next;
        free(temp1);
    }
    else{
        if(head -> data == x){
            node* temp2 = head;
            head = head -> next;
            delete temp2;
        }
        else{
            printf("Sorry not found\n");
        }
    }
}                                                     */
void output()
{
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp -> next;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    int i,n,x,z,d;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        scanf("%d",&x);
///      Insert_At_Begining(x);
        Insert_At_Ending(x);
///      scanf("%d%d",&x,&z);
///      Insert_At_Nth_Position(x,z);
      output();
    }
    scanf("%d",&d);
    Delete_At_Nth_Position(d);
///    Delete_Value(d);
    output();
    return 0;
}

