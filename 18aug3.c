#include<stdio.h> 
//WAP to represent a given sparse matrix in 3-tuple format using 2-D array.
	int main() { 
	int matrix[100][100]; 
	int sparseMatrix[100][3]; 
	int rows, cols, nonZeroCount = 0; 
	printf("Enter size of the sparse matrix (rows columns): "); 
	scanf("%d %d", &rows, &cols); 
	printf("Enter elements of the sparse matrix:\n"); 
	for (int i = 0; i < rows; i++) 
	{ 
	for (int j = 0; j < cols; j++) 
	{ 
	scanf("%d", &matrix[i][j]); 
	if (matrix[i][j] != 0) 
	{ 
	sparseMatrix[nonZeroCount][0] = i; 
	sparseMatrix[nonZeroCount][1] = j; 
	sparseMatrix[nonZeroCount][2] = matrix[i][j]; 
	nonZeroCount++; 
	}	 
	} 
	} 
	printf("Sparse matrix in 3-tuple format:\n"); 
	printf("%d %d %d\n", rows, cols, nonZeroCount); 
	for (int i = 0; i < nonZeroCount; i++) 
	{ 
	printf("%d %d %d\n", sparseMatrix[i][0], sparseMatrix[i][1], sparseMatrix[i][2]); 
	} 
return 0; 
}
