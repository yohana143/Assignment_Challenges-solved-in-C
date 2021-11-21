#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows,columns,row1,column1, n,i,j,k;
    int *ptr;
    int arr[5][5], arr1[5][5], mul[5][5];
    // ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the number of rows and columns in Matrix 1 :\n");
    scanf("%d %d", &rows, &columns);
    printf("Please insert values in the matrix:\n");
    for ( j = 0; j < rows; j++)
    {
        for ( k = 0; k < columns; k++)
        {
            printf("a%d%d = ", j + 1, k + 1);
            scanf("%d", &arr[j][k]);
        }
    }
    printf("\nMatrix 1 is:\n");
    for (j = 0; j < rows; j++)
    {
        for ( k = 0; k < columns; k++)
        {
            printf("%d\t", arr[j][k]);
        }
        printf("\n");
    }
    printf("Enter the number of rows and columns in matrix 2:\n");
    scanf("%d %d", &rows, &columns);
    printf("please insert the values into array\n");
    for ( j = 0; j < rows; j++)
    {
        for ( k = 0; k < columns; k++)
        {
            printf("b%d%d = ", j + 1, k + 1);
            scanf("%d", &arr1[j][k]);
        }
    }
    printf("Matrix 2 is \n");
    for ( j = 0; j < rows; j++)
    {
        for ( k = 0; k < columns; k++)
        {
            printf("%d\t", arr1[j][k]);
        }
        printf("\n");
    }
    // creating an empty matrix
    printf("The matrxi multiplication is:\n");
    for (j = 0; j < rows; j++)
    {
        for (k = 0; k < columns; k++)
        {
            mul[j][k] = 0;
            for ( i = 0; i < columns; i++)
            {
                if(columns == rows)
                {
                mul[j][k] += arr[j][i] * arr1[i][k];
                }
                else
                {
                    printf("Operation cannot be performed \n");
                }
            }
            printf("%d\t",mul[j][k]);
        }
        printf("\n");
    }    
    return 0;
}