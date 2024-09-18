//24.  WRITE A C PROGRAM TO FIND THE VALUE OF Y USING  
//            [1+x         ;   where n=1 
//            [1+x/n       ;   where n=2 
//  y(x,n)  = [1  +x^n      ;   when  n=3 
//            [1 + nx      ;   when n>3 or n<1


#include<stdio.h>
int main(){
    int n;
    double x,y; //Declaration

    // Initialization of all variables
    printf("Enter value of x:");
    scanf("%lf",&x);
    printf("Enter value of n:");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1: y=1+x;
        printf("The value of y is:%.2lf",y); // n=1
        break;
        case 2: y=1+(x/n);
        printf("The value of y is:%.2lf",y); //n=2
        break;
        case 3: y=1+x*x*x;
        printf("The value of y is:%.2lf",y); //n=3
        break;
        default: y=1+(n*x);
        printf("The value of y is:%.2lf",y); // n>3 & n<1 
    }
    return 0;
}