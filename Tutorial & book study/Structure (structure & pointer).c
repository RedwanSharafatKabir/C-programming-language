#include<stdio.h>
#include<string.h>
struct me
{
    char name[100];
    int value;
};
struct me temp;
void swap(struct me *a,struct me *b)
{
    strcpy(temp.name,a->name);
    temp.value=a->value;
    strcpy(a->name,b->name);
    a->value= b->value;
    strcpy(b->name,temp.name);
    b->value=temp.value;
}
int main()
{
    struct me val, val2;
    printf("Name & Value: ");
    scanf("%s%d",val.name,&val.value);
    printf("Name & Value: ");
    scanf("%s%d",val2.name,&val2.value);
    if(val2.value>val.value)
        swap(&val,&val2);
    printf("\nValue(%d) %s\n",val.value,val.name);
    printf("Value(%d) %s\n",val2.value,val2.name);
    return 0;
}

