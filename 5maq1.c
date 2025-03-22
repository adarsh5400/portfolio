#include<stdio.h>
#include<stdlib.h> 
int main()
{
        int n,i,j,k,**a,t;
        printf("\nEnter the N value for square matrix :");
        scanf("%d",&n); 
        a= (int **)calloc(n,sizeof(int*));
        for(i=0;i<n;i++) 
        a[i]=(int *)calloc(n,sizeof(int*));
	printf("\nEnter the elements in %dX%d matrix :",n,n);
	for (i = 0; i<n;i++)
        {
    	for(j=0;j<n; j++)
        {
	scanf("%d",&a[i][j]);
	}
	} 
	printf(	"The matrix before rotation \n");
        for (i = 0; i < n;i++)
	{
        for (j = 0; j < n; j++)
        {
        printf("%d\t", a[i][j]);	
        }
        printf("\n");
        }
        for (i = 0; i < n; i++)
        {
    	for(j = 0; j < n; j++)
    	{
    	if(i<j)
    	{
    	t=a[i][j];
    	a[i][j]=a[j][i];
        a[j][i]=t;	
	}
	}
	}
        printf("\n");
        for (i = 0; i < n; i++)
        {
    	for(j = 0,k=n-1; j<k; j++,k--)
    	{
    	t=a[j][i];
        a[j][i]=a[k][i];
        a[k][i]=t;
	}
	}
	printf(	"The matrix after rotation - AntiClockwise\n");
	for (i = 0; i < n;i++)
	{
        for (j = 0; j < n; j++)
        {
        printf("%d\t", a[i][j]);	
	} 
        printf("\n");
        }
  	return 0;
}
