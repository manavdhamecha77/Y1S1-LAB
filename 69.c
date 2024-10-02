// 69.PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.


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

    // Entering the element to be searched
    int num,count=0;
    int found = 0; // Declaring the variable found
    printf("Enter the element to be searched in the array:");
    scanf("%d",&num);

    // Traversing the array to get the element indices equal to num
    printf("\nElement %d found at indices: ", num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            found = 1;  // Marking that the element is found
            printf(" %d ",i);
            count ++;   // Checks the total occurences of the element in the array
        }
    }

    if(found == 0)
    {
        printf("\nThe element %d is not present in the array");
    }

    else
    {
        printf("\nTotal occurences of the element is : %d\n\n",count);
    }

    return 0;
}