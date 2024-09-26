//54. PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS. 
#include<stdio.h>
int main()
{
    int arr[10],sum=0; //Declaration & Initialization

    //Input of Array
    printf("Enter the array:\n");
    for(int i=0;i<10;i++)
    {
        printf("Number %d :",i+1);
        scanf("%d",&arr[i]);
    }

    //Display Array
    printf("The array is:\n");
    printf("{");
    for(int i=0;i<10;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("}");

    //To print sum of all elements of array
    for(int i=0;i<10;i++)
    {
        sum += arr[i];
    }

    //Printing the result
    printf("\nThe sum of all numbers of the array is: %d",sum);
    
    return 0;
}