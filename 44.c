/*

44. WRITE A PROGRAM INC FOR THE FOLLOWING.
 AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS.
 
 Consumption in unit    Rate for Charge
 
 0-200                  Re 0.50 per unit 

 201-400                Rs. 100 plus Re 0.65 per unit excess of 200
 
 401-600                Rs. 230 plus Re 0.80 per unit excess of 400
 
 Above 600              Rs. 425 plus Rs. 1.25 per unit excess of 600
 
 Print the amount to be paid by the consumer

*/

#include<stdio.h>
int main()
{
    int units;
    double amt; //Declaration

    // Initialization of all variables
    printf("Enter amount of units consumed:");
    scanf("%d",&units);

    if(units<0)
    {
        printf("Number of units is always a positive quantity!!");
    }
    if(units>=0 && units<=200)
    {
        amt = 0.5 * units;
        printf("The amount to paid by the customer is:%lf",amt);
    }
    else if(units>=201 && units<=400)
    {
        amt = 100 + 0.65 * (units-200);
        printf("The amount to paid by the customer is:%lf",amt);
    }
    else if(units>=401 && units<=600)
    {
        amt = 230 + 0.8 * (units-400);
        printf("The amount to paid by the customer is:%lf",amt);
    }
    else
    {
        amt = 425 + 1.25 * (units-600);
        printf("The amount to paid by the customer is Rs.%lf",amt);
    }
    return 0;

}
