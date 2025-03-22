
#include<stdio.h>
int main()
{
	int i,j,row,column,sum=0;
	printf("Enter the number of rows : ");
	scanf("%d",&row);
	printf("Enter the number of coloumns : ");
	scanf("%d",&column);
	int a[row][column];
	printf("Enter the values in the array : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The array is : ");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\nDiagonal elements are : ");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		{
			if(i==j)
			{
				printf("%d\t",a[i][j]);
				printf("\t");
			}
			else
			{
				printf(" ");
			}
		}
	}
}
