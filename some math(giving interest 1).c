#include<stdio.h>
int main()
{
    printf("\t\t\t\t   ***** Sonali Bank Loan Management Department *****");
    double loan, interest, years_to_pay_loan, total_payment, monthly_payment;

    printf("\n\n\n\n\n Loan taken :                      ");
    scanf("%lf", &loan);
    printf("\n Interest rate :                   ");
    scanf("%lf", &interest);
    printf("\n In how many years to pay :        ");
    scanf("%lf", &years_to_pay_loan);
    total_payment = loan + loan * interest *  years_to_pay_loan / 100.00;
    printf("\n Total amount of payment :         %.2lf\n", total_payment);
    monthly_payment = total_payment / (years_to_pay_loan * 12);
    printf("\n Total amount of monthly payment : %.2lf\n", monthly_payment);

    return 0;
}
