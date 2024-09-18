//5. PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE. 

#include<stdio.h>
int main(){
    double a,b,c; //Declaration

    // Initialization of all variables
    printf("Enter value of a:");
    scanf("%.2lf",&a);
    printf("Enter value of b:");
    scanf("%.2lf",&b);

    //Logic
    c = a;
    a = b;
    b = c;

    // Input all parameters
    printf("The new value of a is:%.2lf\n",a);
    printf("The new value of b is:%.2lf",b);
    return 0;
}