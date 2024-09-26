// 58.PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD. 

#include<stdio.h>

int main()
{
    int arr1[10],arr2[10],arr_sum[10];

    //Input of Array 1
    printf("Enter the array 1:\n");
    for(int i=0;i<10;i++)
    {
        printf("Number %d :",i+1);
        scanf("%d",&arr1[i]);
    }

    //Input of Array 2
    printf("Enter the array 2:\n");
    for(int i=0;i<10;i++)
    {
        printf("Number %d :",i+1);
        scanf("%d",&arr2[i]);
    }

    //Sum of the elements
    for(int i=0;i<10;i++)
    {
        arr_sum[i]=arr1[i]+arr2[i];
    }

    //Display the Sum Array
    printf("The Array of sum is:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,",arr_sum[i]);
    }
    printf("\n");
    return 0;
}