//26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N. 

#include<stdio.h>
int main(){
    int n,i,sum_odd=0,sum_even=0; //Declaration

    // Initialization of all variables
    printf("Enter the number till sum required:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum_odd = sum_odd + i;
        }
        else
        {
            sum_even = sum_even + i;
        }
    }
    //Printing the result
    printf("The sum of all odd number between %d is : %d\n",n,sum_odd);
    printf("The sum of all even number between %d is : %d",n,sum_even);
    return 0;
}