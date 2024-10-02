//63. PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.

#include<stdio.h>

// Function to input a matrix
void matrix_input(int matrix[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter (%d,%d) element:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}

// Function to display a matrix
void matrix_display(int matrix[3][3])
{
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d   ",matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[3][3];

    // Matrix Input
    printf("\nEnter the elements of the matrix:\n");
    matrix_input(matrix);

    // Display of inputred matrix
    printf("The matrix:\n");
    matrix_display(matrix);

    // Declaring max and min variables
    int max=matrix[0][0],min=matrix[0][0];

    // Traversing the array to find max and min elements
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(matrix[i][j]>max)
            {
                max = matrix[i][j];
            }
            else if(matrix[i][j]<min)
            {
                min = matrix[i][j];
            }
            else
            {
                continue;
            }
        }
    }

    // Printing the results
    printf("\nThe maximum element in the matrix is :%d",max);
    printf("\nThe minimum element in the matrix is :%d",min);

   return 0;
}

