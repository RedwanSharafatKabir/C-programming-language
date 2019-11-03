#include <stdio.h>
#define max 5
int queue [max] ;
int front = 0 ;
int rear = 0 ;
int item = 0 ;
int isEmpty ()
{
    return item == 0 ;
}
int isFull ()
{
    return item == max ;
}
void enqueue (int data)
{
    if (isFull())
    {
        printf ("Queue Is Full\n") ;
    }
    else
    {
        if (rear==max)
        {
            rear = 0 ;
        }
        queue [rear] = data ;
        rear++ ;
        item++;
    }
}
int dequeue ()
{
    int res = 0 ;
    if (isEmpty())
    {
        printf ("Queue Is Empty\n") ;
    }
    else
    {
        if (front==max)
        {
            front = 0 ;
        }
        res = queue[front] ;
        front++;
        item--;
    }
    return res ;
}
int peek ()
{
    int res = 0 ;
    if (isEmpty())
    {
        printf ("Queue Is Empty\n") ;
    }
    else
    {
        if (front==max)
        {
            front = 0 ;
        }
        res = queue[front] ;
    }
    return res ;
}
void display ()
{
    int i = 0 ;
    int a = front ;
    int b = rear ;
    for (i=0;i<item;i++)
    {
        if (a==max)
        {
            a = 0 ;
        }
        printf ("%d\n",queue[a]) ;
        a++;
}
}
int main ()
{
    enqueue (50) ;
    enqueue (40) ;
    enqueue (30) ;
    dequeue () ;
    peek () ;
    display () ;
    return 0 ;
}

