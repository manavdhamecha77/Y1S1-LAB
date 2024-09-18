//40. READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.

#include<stdio.h>
int main()
{
    int num,sum=0; //Declaration

    // Initialization of all variables
    printf("Enter elements:");

    while(1) //Runs infinitely amny times only terminated when num < 0 is entered inside loop 
    {
        scanf("%d",&num);
        if(num<0)
        {
            break;
        }
        sum+=num;
    }
    //Printing the result
    printf("The sum of all numbers entered is:%d",sum);

    return 0;
}