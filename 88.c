/*
88. WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
*/

#include <stdio.h>

void copy(int *srcP, int *desP)
{
    for (int i = 0; i < 10; i++)
    {
        *(desP + i) = *(srcP + i);
    }
    printf("Elements of second array are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(desP + i));
    }
}

int main()
{
    int arr1[10], arr2[10], i;
    printf("Enter elements of first array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int *srcP = arr1, *desP = arr2;
    copy(srcP, desP);
    return 0;
}