//38. PROGRAM TO PRINT 1,4,9,16,25,………N. 

#include<stdio.h>
int main(){
    int n,i; //Declaration

    // Initialization of all variables
    printf("Enter the numer to which the series (1,4,9,16,25,...,N) ends:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        printf("%d\n",i*i);
    }

    return 0;
}