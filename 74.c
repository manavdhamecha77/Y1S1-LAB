/*
74.Given are one dimensional arrays A and B which are sorted in ascending order. 
Write a program to merge them into a single sorted array C that contains every 
item form array A and B, in ascending order. 
*/

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

// Declaring a function to sort the array
void sort(int n,int arr[n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-1-i;j++) //As the last number is sorted after each iteration so -i
        {
            if(arr[j]>arr[j+1]) //if the left arr greater than right they both swap
            {
                //Swap logic
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
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
    int n1;
    // Size of array 1
    printf("Enter the number of elements to input in array 1:"); 
    scanf("%d",&n1);

    int arr1[n1];
    // Input elements in array 1
    printf("\nEnter the array 1 elements:\n");
    arr_input(n1,arr1);

    // Size of array 2
    int n2;
    printf("Enter the number of elements to input in array 2:"); 
    scanf("%d",&n2);

    // Input elements in array 2
    int arr2[n2];
    printf("\nEnter the array 2 elements:\n");
    arr_input(n2,arr2);

    // Sorting array 1
    sort(n1,arr1);

    // Sorting array 2
    sort(n2,arr2);

    // Display sorted array 1
    printf("\nSorted array 1:\n");
    arr_display(n1,arr1);

    // Display sorted array 2
    printf("\nSorted array 2:\n");
    arr_display(n2,arr2);

    // Declaring & initializing third array 
    int m = n1+n2;
    int arr3[m];

    // Putting values of array 1 and array 2 in array 3 
    int i;
    for(i=0;i<n1;i++)
    {
        arr3[i] = arr1[i];
    }
    for(int j=0 , i=n1  ;  j<n2 , i<m+1  ;  j++ , i++)
    {
        arr3[i] = arr2[j];
    }

    // display the merged array without sort
    printf("The merged array is:\n");
    arr_display(m,arr3);

    // Sorting the merged array
    sort(m,arr3);

    // Display the merged array after sort
    printf("The merged array after sorting is:\n");
    arr_display(m,arr3);

    return 0;
}