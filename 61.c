//61.PROGRAM TO SORT (BUBBLE SORT) AN ARRAY. 

/*
How it works:Repeatedly steps through the list, compares adjacent elements, and swaps
             them if they're in the wrong order. This process is repeated until the 
             list is sorted.

Efficiency: O(n²) in the average and worst cases.
*/

#include<stdio.h>
// Declaring a function to sort the array
void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-1-i;j++) //As the last number is sorted after each iteration so -i
        {
            if(arr[j]>arr[j+1]) //if the left arr greater than right they both swap
            //To sort the array in reverse order just replace > by <.
            {
                //Swap logic
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Declaring a function to print the sorted array
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]); // to sort the character array just use %c here instead of %d
    }
}

//Main function 
int main()
{
    int n;
    printf("Enter the number of elements to input:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the Array which is to be sorted\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // for character array change the datatype to char from int 
    

    //Calling the sort() function
    sort(arr,n); 
    //Calling the print() function
    print(arr,n);
    
    return 0;
}