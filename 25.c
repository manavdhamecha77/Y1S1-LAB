//25. PROGRAM TO PRINT TABLE OF ANY NO.
#include<stdio.h>
int main(){
    int n,i; //Declaration

    // Initialization of all variables
    printf("Enter the number to display its table:");
    scanf("%d",&n);


    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,i*n);
    }
    return 0;
}