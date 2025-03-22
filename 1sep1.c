#include <stdio.h>
#define MAX_SIZE 100
        void transposeSparse(int sparse[MAX_SIZE][3], int transposed[MAX_SIZE][3], int sparseCount) 
	{
    	int rowCount[MAX_SIZE], startingPos[MAX_SIZE];
        for (int i = 0; i < MAX_SIZE; i++) 
        {
        rowCount[i] = 0;
        }
        for (int i = 0; i < sparseCount; i++) 
        {
        rowCount[sparse[i][1]]++;
        }
        startingPos[0] = 0;
        for (int i = 1; i < MAX_SIZE; i++) 
        {
        startingPos[i] = startingPos[i - 1] + rowCount[i - 1];
        }
        for (int i = 0; i < sparseCount; i++) 
        {
        int j = startingPos[sparse[i][1]];
        transposed[j][0] = sparse[i][1];
        transposed[j][1] = sparse[i][0];
        transposed[j][2] = sparse[i][2];
        startingPos[sparse[i][1]]++;
        }
}
int main() 
	{
        int sparse[MAX_SIZE][3];
        int transposed[MAX_SIZE][3];
        int sparseCount;
        printf("Enter the number of non-zero elements in the sparse matrix: ");
        scanf("%d", &sparseCount);
        printf("Enter the sparse matrix in 3-tuple format (Row Column Value):\n");
        for (int i = 0; i < sparseCount; i++) 
        {
        scanf("%d %d %d", &sparse[i][0], &sparse[i][1], &sparse[i][2]);
        }
        transposeSparse(sparse, transposed, sparseCount);
        printf("Transposed sparse matrix in 3-tuple format:\n");
        printf("Row\tColumn\tValue\n");
        for (int i = 0; i < sparseCount; i++) 
        {
        printf("%d\t%d\t%d\n", transposed[i][0], transposed[i][1], transposed[i][2]);
        }
    return 0;
}
