//18. PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR.

#include<stdio.h>
int main(){
    int a,b,c; //Declaration

    // Initialization of all variables
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);

    // Logic using ternary operator(?:)
    a>b ?                                              // Condition 1
    (                                                  // If condition 1 true
    
    a>c ?                                              //Condition 11
    printf("a:%d is maximum",a)                        //If condition 11 true
    : 
    printf("c:%d is maximum",c)                        //If condition 11 false
    )

    :

    (
    b>c ?                                              //Condition 2
    printf("b:%d is maximum",b)                        //If condition 21 true
    :
    printf("c:%d is maximum",c)                        //If condition 21 false
    );
    


    return 0;
}