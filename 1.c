//1. PROGRAM TO CALCULATE SIMPLE INTEREST.

#include<stdio.h>
int main(){
    double si,p,r,t; //Declaration

    // Initialization of all variables
    printf("Enter the principal value:");
    scanf("%.2lf",&p);
    printf("Enter the rate of interest per annum (in perc.):");
    scanf("%.2lf",&r);
    printf("Enter the time period (in years):");
    scanf("%.2lf",&t);

    //Simple Interest = (Principle x Rate x Time)/100
    si = p*r*t/100;

    //Printing the result
    printf("The value of Simple Interest is %.2lf perc.",si);
    return 0;
}