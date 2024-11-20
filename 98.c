/*
98. WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC
MEMORY ALLOCATION.
*/

#include<stdio.h>
#include<stdlib.h>

// Function to allocate memory for a 2D matrix dynamically
int mem_alloc(int row, int col, int ***matrix)
{
    *matrix = (int **)malloc(row * sizeof(int *));
    if (*matrix == NULL)
    {
        printf("Memory Allocation Failed!!");
        return -1;
    }

    for (int i = 0; i < row; i++) 
    {
        (*matrix)[i] = (int *)malloc(col * sizeof(int));
        if ((*matrix)[i] == NULL) 
        {
            printf("Memory allocation failed for columns in row %d.\n", i);
            return -1;
        }
    }
    return 0;
}

// Function to take matrix input from the user
void matrix_input(int row, int col, int ***matrix)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &(*matrix)[i][j]);
        }
    }
}

// Function to display the matrix
void matrix_disp(int row, int col, int ***matrix)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d", (*matrix)[i][j]);
        }
        printf("\n");
    }
}

// Function to free dynamically allocated memory for the matrix
void free_matrix(int row, int **matrix)
{
    for (int i = 0; i < row; i++)
    {
        free(matrix[i]);  // Free each row
    }
    free(matrix);  // Free the array of row pointers
}

int main()
{
    int row1, col1, row2, col2;

    // Input matrix dimensions
    printf("Enter rows of matrix 1: ");
    scanf("%d", &row1);
    printf("Enter columns of matrix 1: ");
    scanf("%d", &col1);
    printf("Enter rows of matrix 2: ");
    scanf("%d", &row2);
    printf("Enter columns of matrix 2: ");
    scanf("%d", &col2);

    // Check for matrix multiplication condition
    if (col1 != row2)
    {
        printf("Product not possible!");  // Matrix multiplication is not possible if columns of A != rows of B
        return -1;
    }

    int **arr1 = NULL, **arr2 = NULL, **prod = NULL;

    // Allocate memory for the matrices
    if (mem_alloc(row1, col1, &arr1) == -1 || mem_alloc(row2, col2, &arr2) == -1 || mem_alloc(row1, col2, &prod) == -1)
    {
        return -1;  // Exit if memory allocation fails
    }

    // Take input for both matrices
    printf("\nEnter elements of matrix 1: \n");
    matrix_input(row1, col1, &arr1);
    printf("\nEnter elements of matrix 2: \n");
    matrix_input(row2, col2, &arr2);

    // Display matrices
    printf("\nElements of matrix 1:\n");
    matrix_disp(row1, col1, &arr1);
    printf("\nElements of matrix 2:\n");
    matrix_disp(row2, col2, &arr2);

    // Initialize product matrix to zero
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            prod[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                prod[i][j] += arr1[i][k] * arr2[k][j];  // Calculate product element by element
            }
        }
    }

    // Display product matrix
    printf("\nElements of product matrix:\n");
    matrix_disp(row1, col2, &prod);

    // Free allocated memory for all matrices
    free_matrix(row1, arr1);
    free_matrix(row2, arr2);
    free_matrix(row1, prod);

    return 0;  // End of program
}

