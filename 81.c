//81. WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.

#include<stdio.h>

int isprime(int num)
{
    int i,flag = 0;

    // Assuming every number prime initially

    // As 0 & 1 are not prime!! 
    if(num == 0 || num == 1)
        flag = 1;
 
    // If number divisible by a number 2 or more than it is not prime
    for (i=2 ; i<=num/2 ; i++)
    {
        if(num%i==0)
        {
            flag = 1;
            break;
        }   
    }

    // For flag = 0 --> Prime
    // For flag = 1 --> Not Prime 

    if(flag == 0)
    {
        printf("The number %d is prime!!",num);
        return 1;
    }
    else
    {
        printf("The number %d is NOT prime!!",num);
        return 0;
    }
        
}

int main()
{
    int num; //Declaration

    // Initialization of all variables
    printf("Enter any number:");
    scanf("%d",&num);

    isprime(num);
    
    return 0;

}