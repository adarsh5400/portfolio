#include<stdio.h>
int main()
// wap to perform the addition of all the elements in the 2D array
{
    int row_size,col_size;
    printf("Enter the row Size Of the Matrix:");
    scanf("%d",&row_size);
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d",&col_size);
    int matrix[row_size][col_size];
    int i,j;
    printf("Enter the Matrix Element:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            sum+=matrix[i][j];
        }
    }
    printf("sum of the Given Matrix Elements is: %d",sum);
}
