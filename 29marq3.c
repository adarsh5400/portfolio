#include<stdio.h>
int main ()
{
	int number,i;
	printf(" enter a positive integer:");
	scanf("%d",&number);
	printf("factors of %d are:",
	number);
	for(i=1; i<=number; ++i)
	{ if (number%i==0)
	{printf("%d",i);
	}
	}
	return 0;
}	
	 
