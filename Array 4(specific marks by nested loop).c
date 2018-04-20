#include<stdio.h>
int main()
{
    int i,j,total_marks[]={1,2,3,4,5,6,7},marks_examinee[7];
    for(i=0;i<7;i++)
        marks_examinee[i]=0;
    for(i=0;i<7;i++){
        marks_examinee[total_marks[i]]++;
    for(j=0;j<7;j++)
        printf("%d ",marks_examinee[j]);
        printf("\n");
    }
    return 0;
}
