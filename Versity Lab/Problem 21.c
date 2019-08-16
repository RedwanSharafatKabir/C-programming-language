#include <stdio.h>
int main()
{
    int row,col,rows,cols,space;
    scanf("%d\n%d", &rows,&cols);
    for(row=1;row<=rows;row++){
        for(col=1;col<=cols;col++){
            if(row==1||row==rows||col==1||col==cols){
               printf("*");
            }
            else{
                printf(" ");
            }
        }
     printf("\n");
    }

    return 0;
}


