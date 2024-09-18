//15.PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.

#include<stdio.h>
int main(){
    double s1,s2,s3,s4,s5,div; //Declaration

    // Initialization of all variables
    printf("Enter marks of Subject 1:");
    scanf("%.2lf",&s1);
    printf("Enter marks of Subject 2:");
    scanf("%.2lf",&s2);
    printf("Enter marks of Subject 3:");
    scanf("%.2lf",&s3);
    printf("Enter marks of Subject 4:");
    scanf("%.2lf",&s4);
    printf("Enter marks of Subject 5:");
    scanf("%.2lf",&s5);

    //Logic
    div = (s1+s2+s3+s4+s5)/5;

    //Printing the result
    printf("The division (Average Marks) is:%.2lf",div);

    return 0;
}