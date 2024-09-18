//20. PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE. 

#include<stdio.h>
int main(){
    double a,b,sum,diff,pro,div; 
    int chc; //Declaration

    // Initialization of all variables

    printf("\n [1.ADD, 2.SUBTRACT, 3.PRODUCT, 4.DIVISION]\n Enter choice:"); //Menu Driven
    scanf("%d",&chc);

    printf("\n*******************************\n");
    printf("_____SIMPLE CALCULATOR_____\n");
    printf("\n*******************************\n");

    printf("\nEnter number 1:");
    scanf("%lf",&a);

    printf("Enter number 2:");
    scanf("%lf",&b);

    //Logic
    sum = a + b;
    diff = a - b;
    pro = a * b;
    div = a / b;


    switch(chc)
    {
    case 1:
    printf("\nThe Sum of two numbers is: %.2lf",sum); //Add
    break;
    case 2:
    printf("T\nhe Difference between the two numbers is: %.2lf",diff); //Subtract
    break;
    case 3:
    printf("\nThe Product of two numbers is: %.2lf",pro); //Multiply
    break;
    case 4:
    printf("\nThe Division of two numbers is: %.2lf",div); //Divide
    break;
    default: printf("\nInvalid choice");
    }
    
    return 0;
}