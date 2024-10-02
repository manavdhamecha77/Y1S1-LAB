// 64.PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS. 

#include<stdio.h>

// Function to input matrix
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

//n Function to display matrix
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
    
    // Entering (2d array) matrix (of 3 rows & 3 coloumns)
    int matrix[3][3];
    printf("Enter the matrix:\n");
    matrix_input(matrix);
   
    //Display the matrix
    printf("\n**************************************\n");
    printf("\nMatrix:\n");
    matrix_display(matrix);
    
    printf("**************************************\n");

    // Declaring row sum 1,2,3 as zero
    int rs1=0,rs2=0,rs3=0;

    // Traversing the rows of matrix to get the sum
    for(int i=0;i<3;i++)
    {
        rs1 += matrix[0][i];
    }

    for(int i=0;i<3;i++)
    {
        rs2 += matrix[1][i];
    }

    for(int i=0;i<3;i++)
    {
        rs3 += matrix[2][i];
    }

    //Printing the results
    printf("\nSum of 1st row: %d",rs1);
    printf("\nSum of 2nd row: %d",rs2);
    printf("\nSum of 3rd row: %d",rs3);
    printf("\n\n");

}