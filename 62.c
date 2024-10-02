// 62. PROGRAM TO REVERSE AN ARRAY. 

#include<stdio.h>

// Function to Input array elements
void arr_input(int n,int arr[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
}

// Function to display array elements
void arr_display(int n,int arr[n])
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}


int main()
{
    int n;
    // Size of array
    printf("Enter the number of elements to input:"); 
    scanf("%d",&n);

    int arr[n];

    // Array Input
    printf("Enter the elements of the array:\n");
    arr_input(n,arr);

    // Display of inputed array
    printf("The elements of the inputed array:\n");
    arr_display(n,arr);
    
    //Swaps the nth and (n-1)th number of array
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    //Display reversed array
    printf("\nReversed Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}