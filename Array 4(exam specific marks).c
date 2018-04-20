#include<stdio.h>
int main()
{
    int i, mark, examinee, total_marks[]={77,99,42,87,77,42,95};
    for(mark=42;mark<=100;mark++)
    {
        examinee=0;
        for(i=0;i<7;i++)
        {
            if(total_marks[i]==mark){
                examinee++;
            }
        }
        printf("Marks : %d  is obtained by  %d Examinee\n", mark, examinee);
    }

    return 0;
}
