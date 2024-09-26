/*
56. PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, 
NEGATIVE, AND ZERO ELEMENTS. 
*/

#include<stdio.h>
int main()
{
    int arr[10],ct_neg=0,ct_pos=0,ct_zero=0; //Declaration & Initialization

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

    //To count positive numbers, negative numbers & zero
    for(int i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            ct_pos++;
        }
        else if(arr[i]<0)
        {
            ct_neg++;
        }
        else if(arr[i]==0)
        {
            ct_zero ++;
        }
        else
        {
            continue;
        }

    }

    //Printing the result
    printf("\nThe number of negative elements is %d",ct_neg);
    printf("\nThe number of positive elements is %d",ct_pos);
    printf("\nThe number of zero elements is %d",ct_zero);
    
    return 0;
}