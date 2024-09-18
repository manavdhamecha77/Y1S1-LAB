//8. EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO 
//CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES.

#include<stdio.h>
int main(){
    double s,m,h,d; //Declaration
    int time=31558150; //Declaration & Initialization
   
    //Logic
    s = time;
    m = time/60;
    h = m/60;
    d = h/24;
    
    //Printing the result
    printf("The time is %.2lf days,%.2lf hours,%.2lf minutes,%.2lf seconds",d,h,m,s);
    return 0;
}