#include<stdio.h>
int main ()
{
	int i,a,b;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	printf("odd numbers are\n:");
	for (i=a; i<=b; i++)
	{
	if ((i%2) !=0)
	{
	printf("%d\n",i);
	}
	}
	return 0;
}	
	
