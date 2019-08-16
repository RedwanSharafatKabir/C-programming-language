#include<stdio.h>
int main()
{
    int n, n1, n2, n3, result;
    char option;
 do{
    printf("\n\t\t                              ***_MUNNA CALCULATOR_***\n");
    printf("\n\n\t\t                         WHICH PROBLEM DO YOU WANT TO SOLVE?\n");
    printf("\n\npress 1 for Addition\n");
    printf("\npress 2 for Subtraction\n");
    printf("\npress 3 for Multiplication\n");
    printf("\npress 4 for Division\n");
    printf("\npress 5 for Equation1(+,-)\n");
    printf("\npress 6 for Equation2(*,/)\n");
    scanf("%d",&n);
    printf("\nEnter first number\n");
    scanf("%d",&n1);
    printf("Enter second number\n");
    scanf("%d",&n2);
    printf("Enter third number\n");
    scanf("%d",&n3);
    switch(n)
    {
        case 1:result=n1+n2+n3;
               printf("Addition of three numbers is = %d", result);
               break;
        case 2:result=n1-n2-n3;
               printf("Subtraction of three numbers is = %d", result);
               break;
        case 3:result=n1*n2*n3;
               printf("Multiplication of three numbers is = %d", result);
               break;
        case 4:result=n1/n2/n3;
               printf("Division of three numbers is = %d", result);
               break;
        case 5:result=n1+n2-n3;
               printf("Equation1 of three numbers is = %d", result);
               break;
        case 6:result=n1*n2/n3;
               printf("Equation2 of three numbers is = %d", result);
               break;
    }
    printf("\nContinue Y/N?\n");
    option=getche();
   }
     while(option=='Y');
     return 0;

}
