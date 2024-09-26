//60. PROGRAM TO SORT (SELECTION SORT) AN ARRAY. 

#include<stdio.h>

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

    printf("Unsorted Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        int min_index = i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }

        if(min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    printf("Sorted Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    

    
}