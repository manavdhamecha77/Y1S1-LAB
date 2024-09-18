//10. WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE 
//FORMULA. 
//CM = M/2+P/2+C/2+E 
//WHERE CM = Cut of f mark 
//M = Marks in Mathematics out of 200 
//P = Marks in Physics out of 200 
//C = Marks in Chemistry out of 200 
//E = Marks in entrance examination out of 100


#include<stdio.h>
int main(){
    double cm,m,p,c,e; //Declaration

    // Initialization of all variables
    printf("Enter the marks obtained in Mathematics (out of 200 ):");
    scanf("%.2lf",&m);
    printf("Enter the marks obtained in Physics (out of 200) :");
    scanf("%.2lf",&p);
    printf("Enter the marks obtained in Chemistry (out of 200) :");
    scanf("%.2lf",&c);
    printf("Enter the marks obtained in Entrance Examination (out of 100) :");
    scanf("%.2lf",&e);
    
    //Logic
    cm = m/2+c/2+p/2+e;

    //Printing the result
    printf("The Cutoff Mark of the student is :%.2lf",cm);
    return 0;
}