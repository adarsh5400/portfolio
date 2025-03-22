#include<stdio.h>
int main ()
{
    int n;
    printf("enter the size of the square matrix:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("enter the  element of the matrix:\n");
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {scanf("%d",&matrix[i][j]);}
    }
    printf("upper triangular matrix:\n");
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)    {if (j<i)
    {printf("o\t");}
    else 
    {printf("%d\t",matrix[i][j]);}}
    printf("\n");
    }
    return 0;
}
