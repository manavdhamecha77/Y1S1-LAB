//6. PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE. 

#include<stdio.h>
int main(){
    int a,b; //Declaration

    // Initialization of all variables
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    //Logic
    a = a^b; // here ^ refers to XOR GATE where only 01 & 10 returns 1 other all combinations return 0
    b = a^b;
    a = a^b;
    
    //Printing the result
    printf("The new value of a is:%d\n",a);
    printf("The new value of b is:%d",b);
    return 0;
}