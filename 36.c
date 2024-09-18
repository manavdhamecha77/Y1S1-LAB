//36. PROGRAM TO PRINT 1,3,5,7,9………N.

#include<stdio.h>
int main(){
    int n,i; //Declaration
    
    // Initialization of all variables
    printf("Enter the number to which the series (1,3,5,7,9,...N) ends :");
    scanf("%d",&n);
    for (i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
    

    return 0;
}