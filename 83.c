//83. WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM. 

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


int arrmax(int n,int arr[n])
{
    int max;
    max = arr[0];

    for (int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    
    return max; 
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

    printf("\nThe Maximum element of the array is: %d",arrmax(n,arr));

}