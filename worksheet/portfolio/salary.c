
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Rhys Carter
 * ID: 201974757
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary=36250; // £14000 - £40000
    float national_insurance=0.08; // 0.00 - 0.10
    float tax_rate=0.15; // 0.10 - 0.30

    // calculate the deductions and final take-home salary
    double ni_deduction = salary * national_insurance; // calculate amount to deduct for ni

    double salary_after_ni_deduction = salary - ni_deduction; // deduct ni from salary

    double amount_over_12500 = salary_after_ni_deduction - 12500; // calculate the amount over £12500

    double tax = 0;

    if (amount_over_12500 > 0) {
      tax = tax_rate * amount_over_12500; // if amount is over 12500, compute tax. Otherwise, tax is 0
    }

    double take_home = salary - ni_deduction - tax; // calculate take home salary

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2lf\n",salary);
    printf("NI contribution £%.2lf\n",ni_deduction);
    printf("Tax contribution £%.2lf\n",tax);
    printf("Take home salary £%.2lf\n",take_home);

    return 0;
 }