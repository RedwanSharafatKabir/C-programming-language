#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data ;
    struct node *next ;
}node ;
node *head ;
void insert (int data)
{
    node *node1 ;
    node1=(node*)malloc(sizeof(node)) ;
    node1->data = data ;
    node1->next = NULL;
    node*temp;
    temp=head ;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=node1;
}
void display ()
{
    node*temp;
    temp=head;
    temp=temp->next;
    while (temp!=NULL)
    {
        printf ("%d\n",temp->data) ;
        temp=temp->next;
    }
}
void search (int data)
{
    node*temp=head ;
    temp=temp->next;
    while (temp!=NULL)
    {
        if(temp->data==data)
        {
            printf ("Found\n") ;
            return ;
        }
        temp = temp ->next ;
    }
    printf ("Not Found\n") ;
}
int main ()
{
    head = (node*)malloc(sizeof(node)) ;
    head -> next = NULL ;
    insert (21) ;
    insert (50) ;
    display () ;
    search (50) ;
    search (10) ;
    return 0;
}

