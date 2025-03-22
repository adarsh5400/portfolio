#include<stdio.h>
int main ()
{
	// logical operator following number  
	int a,b,c,d,e;
	a=16;
	b=35;
	c=0;
	d=a&&b;
	printf("%d\n",d);
	e=a&&c;
	printf("%d\n",e);
	e=a||c;
	printf("%d\n",e);
	e=b||c;
	printf("%d\n",e);
	e=c||c;
	printf("%d\n",e);
	e=c&&b;
	printf("%d\n",e);
	return 0;
}	
	
