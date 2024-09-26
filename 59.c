//59. PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS. 


#include<stdio.h>

int main()
{
    int arr1[10],arr2[10],arr3[10]; //Declaration & Initialization

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

    printf("\n BEFORE ");

    //Display Array 1
    printf("\nArray 1:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,",arr1[i]);
    }

    //Display Array 2
    printf("\nArray 2:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,",arr2[i]);
    }
    
    //Swapping the two arrays
    for(int i=0;i<10;i++)
    {
        arr3[i] = arr2[i];
        arr2[i] = arr1[i];
        arr1[i] = arr3[i];
    }

    printf(" \nAFTER SWAPPING ");

    //Display swapped Array 1
    printf("\nArray 1:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,",arr1[i]);
    }

    //Display swapped Array 2
    printf("\nArray 2:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,",arr2[i]);
    }
    printf("\n");
    return 0;
}