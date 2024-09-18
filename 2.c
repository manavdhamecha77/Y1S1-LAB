//2. PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE.
#include<stdio.h>
int main(){
    double s1,s2,s3,s4,s5,tot,perc;  //Declaration

    // Initialization of all variables
    printf("Enter marks of subject 1(out of 100):");
    scanf("%.2lf",&s1);
    printf("Enter marks of subject 2(out of 100):");
    scanf("%.2lf",&s2);
    printf("Enter marks of subject 3(out of 100):");
    scanf("%.2lf",&s3);
    printf("Enter marks of subject 4(out of 100):");
    scanf("%.2lf",&s4);
    printf("Enter marks of subject 5(out of 100):");
    scanf("%.2lf",&s5);

    //Logic
    tot = s1+s2+s3+s4+s5; 
    perc = tot/5;

    //Printing the result
    printf("The Total marks of the student is:%.2lf\n",tot);
    printf("The percentage obtained by the student is:%.2lf perc.",perc);
    return 0;
}