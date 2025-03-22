#include<stdio.h>
int main ()
    {
     int n;
     printf("enter the size of  the square matrix:");
     scanf("%d",&n);
     int matrix[n][n];
     printf("enter the  element of the matrix:\n");
     int nonzero_count=0;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] !=0)
            {
                nonzero_count++;
        }  
     }
    }
    printf("the entered matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",matrix[i][j]);           
        }
        printf("\n");
    }
    printf("number of nonzero elemennts in the matrix:%d\n",nonzero_count);
    return 0;
    }
