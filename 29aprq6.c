#include<stdio.h>
int main ()
{
	int a[10],n,i;
	printf("enter the number to convert:");
	scanf("%d",&n);
	for(i=0;n>0;i++);
	for(j=0;n>0;j++);
	{
	a[i]=n%2;
	n=n/2;
	}
	printf("\n binary of given number is=");
	for(i=i-1;i>0;i--)
	{
	printf("%d",a[i]);
	}
	return 0;
}	
