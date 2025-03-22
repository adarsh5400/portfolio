//Write a program to perform the following operations on a given square matrix using functions:
#include<stdio.h>
	void findNonZero(int matrix[10][10], int n);
	void displayUpperTriangular(int matrix[10][10], int n);
	void displayElementsAboveAndBelowDiagonal(int matrix[10][10], int n);
	int main()
	{
    	int matrix[10][10], n, i, j;
    	printf("Enter the size of the square matrix: ");
    	scanf("%d", &n);
    	printf("Enter the elements of the matrix:\n");
    	for (i = 0; i < n; i++)
    	{
        for (j = 0; j < n; j++)
        {
        scanf("%d", &matrix[i][j]);
        }
    	}
    	printf("\nNumber of non-zero elements: ");
    	findNonZero(matrix, n);
    	printf("\nUpper triangular matrix:\n");
    	displayUpperTriangular(matrix, n);
    	printf("\nElements above and below the main diagonal:\n");
    	displayElementsAboveAndBelowDiagonal(matrix, n);
        return 0;
	}
	void findNonZero(int matrix[10][10], int n)
	{
    	int count = 0, i, j;
    	for (i = 0; i < n; i++)
    	{
        for (j = 0; j < n; j++)
        {
        if (matrix[i][j]!= 0)
        {
        count++;
        }
        }
    	}
    	printf("%d\n", count);
	}
	void displayUpperTriangular(int matrix[10][10], int n)
	{
    	int i, j;
    	for (i = 0; i < n; i++)
    	{
        for (j = 0; j <= i; j++)
        {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    	}
	}
	void displayElementsAboveAndBelowDiagonal(int matrix[10][10], int n)
	{
    	int i, j;
    	for (i = 0; i < n; i++)
    	{
        for (j = 0; j < n; j++)
        {
        if (i == j)
        {
        printf("  ");
        }
        else if (i < j)
        {
        printf("%d ", matrix[i][j]);
        }
        else
        {
        printf("%d ", matrix[j][i]);
        }
        }
        printf("\n");
    	}
}
