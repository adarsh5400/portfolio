#include<stdio.h>
int main ()
{
	int a;
	int b=4;
	int c=8;
	int d=2;
	int e=4;
	int f=2;
	a=b+c/d+e*f;
	printf("the value of a is-%d\n",a);
	a-(b+c)/d+e*f;
	printf("the value of a is-%d\n",a);
	a-b+c/((d+e)*f);
	printf("the value of a is-%d\n",a);
	return 0;
}
