// 42. READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.


#include<stdio.h>
int main()
{
    int num,i,flag = 0; //Declaration

    // Initialization of all variables
    printf("Enter any number:");
    scanf("%d",&num);

// Assuming every number prime initially so flag = 0 --> Prime
// For flag = 1 --> Not Prime 

    if(num == 0 || num == 1)
        flag = 1;
 

    for (i=2 ; i<=num/2 ; i++)
    {
        if(num%i==0)
        {
            flag = 1;
            break;
        }
            
    }

    //Printing the result
    if(flag == 0)
        printf("The number %d is Prime!!",num);
    else
        printf("The number %d is Composite!!",num);

    return 0;

}