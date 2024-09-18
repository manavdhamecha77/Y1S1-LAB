//22. PROGRAM TO CALCULATE FACTORIAL OF A NO.

#include<stdio.h>
int main(){
    int num,fact=1,i; //Declaration

    // Initialization of all variables
    printf("Enter the number:");
    scanf("%d",&num);

    //For loop to multiply all numbers after num till 1
    for(i=1;i<=num;i++){
        fact = fact * i;
    }
    
    //Printing the result
    printf("The factorial of the number is:%d",fact);
    return 0;
}