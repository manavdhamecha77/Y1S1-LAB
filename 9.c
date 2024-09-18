//9. PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND. 

#include<stdio.h>
int main(){
    double h,m,s,tot_sec; //Declaration

    // Initialization of all variables
    printf("Enter hr:");
    scanf("%.2lf",&h);
    printf("Enter min:");
    scanf("%.2lf",&m);
    printf("Enter sec:");
    scanf("%.2lf",&s);

    //Logic
    tot_sec = h*60*60 + m*60 + s;

    //Printing the result
    printf("The Total time (in sec) is:%.2lf",tot_sec);
    return 0;
}