//11. PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME. 

#include<stdio.h>
int main(){
    int s,m,h,d,time; //Declaration

    // Initialization of all variables
    printf("Enter total time (in sec) :");
    scanf("%d",&time);

    //Logic
    s = time%60;
    m = time/60;
    h = m/60;
    d = h/24;
    m = m%60;
    h = h%60; 

    //Printing the result
    printf("The %d Days:%d Hours:%d Minutes:%d Seconds",d,h,m,s);
    
    return 0;
}