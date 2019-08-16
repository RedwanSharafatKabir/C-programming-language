#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;
void insert_at_nth()
{
    int n,data;
    printf("\nEnter Zero Indexed Node Position:");
    scanf("%d",&n);
    printf("\nEnter Data:");
    scanf("%d",&data);
    node *temp=(node *)malloc(sizeof(node));
    temp->data=data;
    int i;
    node *temp2=head;
    for (i=0; i<n; i++)
    {
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}
void display()
{
    node *temp=head;
    temp=temp->next;
    printf("\nLinked List: ");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int option;
    head=(node *)malloc(sizeof(node));
    head->next=NULL;
    display();
    while(1)
    {
        printf("\nChoose Operation\n1.Insert\n2.Display\n3.Close the program\n");
        printf("\nOption:");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            insert_at_nth();
            display();
            break;
        case 2:
            display();
            break;
        case 3:
            return;
        default:
            break;
        }
    }
    return 0;
}

