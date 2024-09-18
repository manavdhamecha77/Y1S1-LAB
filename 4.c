//4. PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES. 

#include<stdio.h>
int main(){
    double f,c; //Declaration

    // Initialization of all variables
    printf("Enter the temperature (in Deg. Farenhients):");
    scanf("%.2lf",&f);

    //Logic
    c = (f-32)*5/9;

    //Printing the result
    printf("The Temperature (in Deg. Celius) is: %.2lf",c);
    return 0;
}