#include <stdio.h>
int main()
{
    int row, col, rows, space;
    scanf("%d",&rows);
    for(row=1; row<=rows; row++)
    {
        for(space=1; space<=rows-row; space++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
