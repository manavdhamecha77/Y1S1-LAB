/*
55.PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
TOTAL NO. OF EVERY ELEMENT.
*/

#include<stdio.h>
int main()
{
    int arr[10],ct_odd=0,ct_even=0; //Declaration & Initialization

    //Input of Array
    printf("Enter the array:\n");
    for(int i=0;i<10;i++)
    {
        printf("Number %d :",i+1);
        scanf("%d",&arr[i]);
    }

    //Display the array
    printf("The array is:\n");
    printf("{");
    for(int i=0;i<10;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("}");

    //To check if the number is even or odd and to count them
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            ct_even ++;
        }
        else
        {
            ct_odd ++;
        }
    }

    //Printing the result
    printf("\nThe number of odd elements is %d",ct_odd);
    printf("\nThe number of even elements is %d",ct_even);

    return 0;
}


