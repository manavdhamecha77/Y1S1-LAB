//37. PROGRAM TO PRINT 2,4,6,8,10,12………N. 

#include<stdio.h>
int main(){
    int n,i; //Declaration

    // Initialization of all variables
    printf("Enter the number to which the series (2,4,6,8,10,12...,N) ends:");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }

    return 0;
}