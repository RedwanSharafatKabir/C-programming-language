#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data ;
    struct node *next ;
}node ;
node *head ;
int main ()
{
    head -> next = NULL ;
    node *temp = (node*)malloc(sizeof(node)) ;
    temp->data=13;
    temp->next=NULL;
    head->next=temp ;

    node*temp1 = malloc(sizeof(node));
    temp1->data=50;
    temp1->next=NULL;

    node *traverse ;
    traverse = head ;
    while (traverse->next!=NULL)
    {
        traverse = traverse ->next;
    }
    traverse->next=temp1;
}
