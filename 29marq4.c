#include<stdio.h>
int main ()
{
	int a,b,m,n,gcd;
	printf("\n enter two numbers=>");
	scanf("%d%d",&a,&b);
	m=a;n=b;
	{
	if(a>b)
	a=a-b;
	else
	b=b-a;
	}
	gcd=b;
	printf("\n the GCD of%d and %d is %d/n",m,n,gcd);
	return 0;
	}
