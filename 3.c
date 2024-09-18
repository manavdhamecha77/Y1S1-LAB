//3. PROGRAM TO CALCULATE GROSS SALARY.

#include<stdio.h>
int main(){
    double bas,hra,oth_all,gross; //Declaration

    // Initialization of all variables
    printf("Enter the basic salary(in $):");
    scanf("%.2lf",&bas);
    printf("Enter HRA income(in $):");
    scanf("%.2lf",&hra);
    printf("Enter other allowances(in $):");
    scanf("%.2lf",&oth_all);

    //Logic
    gross = bas + hra + oth_all;

    //Printing the result
    printf("The Gross Salary is %.2lf $ per month",gross);
    return 0;
}