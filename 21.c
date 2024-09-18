//21. PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC OPERATOR)AND THIS  PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM). 


#include<stdio.h>
int main(){
    double a,b,sum,diff,pro,div; //Declaration
    char chc; //Declaration
    printf("_____SIMPLE CALCULATOR_____\n");

    // Initialization of all variables
    printf("\nEnter number 1:");
    scanf("%lf",&a);
    printf("Enter number 2:");
    scanf("%lf",&b);

    printf("[1.+, 2.-, 3.*, 4./] Enter type of operation:");
    scanf("%c",&chc);

    scanf("%c");//\n problem

    //Logic
    sum = a + b;
    diff = a - b;
    pro = a * b;
    div = a / b;

    

    switch(chc)
    {
    case '+':
        printf("The Sum of two numbers is: %.2lf",sum); //Add
        break;
    case '-':
        printf("The Difference between the two numbers is: %.2lf",diff); //Subtract
        break;
    case '*':
        printf("The Product of two numbers is: %.2lf",pro); //Multiply
        break;
    case '/':
        printf("The Division of two numbers is: %.2lf",div); //Divide
        break;
    }
    return 0;
}