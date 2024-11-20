/*
92. WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
*/

#include<stdio.h>

int arr_max(int n,int *arr)
{
    int max = *arr;
    arr ++;
    for(int i=1;i<n;i++)
    {
        if(*arr > max)
        {
            max = *arr;
            arr ++;
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int *pArr = NULL;
    pArr = &arr[0];
    
    
    printf("The Maximum Element in the array is: %d",arr_max(n,pArr));


}