// 76. WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD. 

#include<stdio.h>

int odd_even(int num)
{
    // If number is divisible by 2 it is even or else odd
    if (num%2 == 0)
    {
        printf("The number %d is even!!",num);
    }
    else
    {
        printf("The number %d is odd!!",num);
    }
    return 0;
}

int main(){
    int num; //Declaration

    // Initialization of all variables
    printf("Enter a number: ");
    scanf("%d",&num);

    odd_even(num);
    return 0;
    
}