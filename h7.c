#include<stdio.h>
int main ()
{
    int n;
    printf("enter the size of the square maatrix:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("enter the elements of the matrix:\n");
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {scanf("%d",&matrix[i][j]);}}
    printf("elements below the main diaagonal:\n");
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    {printf("%d",matrix[i][j]);}
    printf("\n");}
    printf("elements above the main diagonal:\n");
    for(int i=0;i<<n;i++)
    {for(int j=0;j<n;j++)
    {printf("%d",matrix[i][j]);}
    printf("\n");}
    return 0;
}
