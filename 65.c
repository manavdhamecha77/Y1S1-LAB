//65.PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE. 

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
    // Entering the (2d array) matrix of 3 rows & 3 coloumns
    int matrix[3][3];
    printf("Enter the matrix:\n");
    matrix_input(matrix);
    

    //Display matrix
    printf("The matrix is:\n");
    matrix_display(matrix);

    // Display the tanspose of matrix 
    printf("\nThe Transpose of the above matrix is:\n");
    for(int i=0;i<3;i++)
    {
        printf("\n");
        for(int j=0;j<3;j++)
        {
            printf("%d   ",matrix[j][i]);
        }
        printf("\n");
    }
}