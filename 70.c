// 70.PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY.

#include<stdio.h>

void arr_input(int n,int arr[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
}

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
    int n,num,count=0;
    printf("\nEnter length of the array:");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter the elements of the array:\n");
    arr_input(n,arr);

    printf("\nEnter the element to check its occurence in the array:");
    scanf("%d",&num);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            count ++;
        }
        else
        {
            continue;
        }
    }

    printf("-->The element %d occured %d times in the array....",num,count);


    return 0;
}
