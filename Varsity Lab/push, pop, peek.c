#include <stdio.h>
int data [5] ;
int max = 5 ;
int top = -1 ;
int isEmpty ()
{
    return top == -1 ;
}
int isFull ()
{
    return top == (max-1) ;
}
void push (int a)
{
    if (isFull())
    {
        printf ("Stack Overflow\n") ;
    }
    else
    {
        top++ ;
        data[top] = a ;
    }
}
int pop ()
{
    int a = -1 ;
    if (isEmpty())
    {
        printf ("Stack Overflow\n") ;
    }
    else
    {
        a=data[top] ;
        top--;
    }
    return a ;
}
int peek ()
{
    int a = -1 ;
    if (isEmpty())
    {
        printf ("Stack Empty\n") ;
    }
    else
    {
        a=data[top] ;
    }
    return a ;
}
void display ()
{
    if (isEmpty())
    {
        printf ("Stack Empty\n") ;
    }
    else
    {
        int i ;
        for (i=0;i<=top;i++)
        {
            printf ("%d\n",data[i]) ;
        }
    }
}
int main ()
{
    push (10) ;
    pop () ;
    push (50) ;
    push (80) ;
    printf ("%d\n",peek()) ;
    display () ;
    return 0 ;
}
