//67. PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM IN THIRD MATRIX


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
    
    // Entering (2d array) matrix 1 (of 3 rows & 3 coloumns)
    int matrix1[3][3];
    printf("Enter the matrix 1:\n");
    matrix_input(matrix1);
   
    // Entering (2d array) matrix 2 (of 3 rows & 3 coloumns)
    int matrix2[3][3];
    printf("Enter the matrix 2:\n");
    matrix_input(matrix2);
    

    //Display matrix 1
    printf("\n**************************************\n");
    printf("\nMatrix 1:\n");
    matrix_display(matrix1);
    
    printf("**************************************\n");
    
    //Display matrix 2
    printf("Matrix 2:\n");
    matrix_display(matrix2);
    

    printf("**************************************\n");

    // Declaring and initializing the difference matrix 
    int diff[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            diff[i][j]= matrix1[i][j] - matrix2[i][j];
    
        }
    }

    //Display the difference matrix
    printf("Difference Matrix:\n");
    matrix_display(diff);
    
    printf("\n**************************************\n");
}