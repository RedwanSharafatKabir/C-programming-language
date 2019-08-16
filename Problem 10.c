#include<stdio.h>
int main()
{
    int row, rows, space, col;
    scanf("%d", &rows);
    for(row=1;row<=rows;row++){
        for(space=1;space<=rows-row;space++){
            printf(" ");
        }
        for(col=space;col<=rows;col++){
            if(row==1 || row==rows || space==1 || space==rows-row || col==space || col==rows){
             printf("%d",col);
            }
             else{
            printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

