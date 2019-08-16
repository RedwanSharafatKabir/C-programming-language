#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;
void insert(int data)
{
    node *temp,*temp2;
    temp=(node *)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    temp2=head;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;
}
void display()
{
    node *temp=head;
    temp=temp->next;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n\n");
}
void delete(int data)
{
    node *temp=head;
    while(temp->next!=NULL)
    {
        if((temp->next)->data==data)
        {
            node *temp2=temp->next;
            temp->next=(temp->next)->next;
            free(temp2);
            return;
        }
        temp=temp->next;
    }
}
void search(int data)
{
    node *temp=head;
    temp=temp->next;
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            printf("Found\n\n");
            return;
        }
        temp=temp->next;
    }
    printf("Not Found\n\n");
}
int main()
{
    int option,data;
    head=(node *)malloc(sizeof(node));
    head->next=NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(7);
    display();
    delete(4);
    display();
    search(3);
    while(1)
    {
        printf("Choose operation\n1.Insert Data\n2.Delete Data\n3.Search Data\n4.Display List\n5.Close the program\n\n");
        scanf("%d",&option);
        if (option>=1 && option<=3)
        {
            printf("\nEnter Data:");
            scanf("%d",&data);
        }
        switch (option)
        {
        case 1:
            insert(data);
            display();
            break;
        case 2:
            delete(data);
            display();
            break;
        case 3:
            search(data);
            break;
        case 4:
            display();
            break;
        case 5:
            return;
        default:
            break;
        }
    }

    return 0;
}
