#include<stdio.h>
int main ()
{
	int i,j,row,column;
	printf("enter number of row");
	scanf("%d",&row);
	printf("enter number of column");
	scanf("%d",&column);
	int array[row][column];
	printf("enter the elements in 2d array");
	for(i=0;i<row;i++)
	for(j=0;j<column;j++)
	{
	scanf("%d",&array[i][j]);
	}
	for(i=0;i<row;i++)
	{
	for(j=0;j<row;j++)
	{
	printf("%d ",array[i][j]);
	}
	}
	return 0;
}	
