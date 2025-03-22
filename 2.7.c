#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter nos:");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("value of a:%d",a);
	printf("value of b:%d",b);
	return 0;
}
