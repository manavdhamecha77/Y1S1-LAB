//23. PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>). 

#include<stdio.h>
int main(){
    int base,pow,expo=1; //Declaration

    // Initialization of all variables
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the power:");
    scanf("%d",&pow);

    //For loop to multiply the number by itself times the power user mentioned
    for(int i=1;i<=pow;i++){
        expo = expo * base;

    }

    //Printing the result
    printf("The value of the exponent is:%d",expo);
    return 0;
}