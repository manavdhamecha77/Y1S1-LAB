//7. PROGRAM TO CALCULATE AREA OF A TRIANGLE. 

#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,s,ar; //Declaration

    // Initialization of all variables
    printf("Enter the lenght of side 1:");
    scanf("%.2lf",&a);
    printf("Enter the lenght of side 2:");
    scanf("%.2lf",&b);
    printf("Enter the lenght of side 3:");
    scanf("%.2lf",&c);

    //Logic
    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));

    //Printing the result
    printf("The area of the triangle is: %.2lf Sq.units",ar);
    return 0;
}