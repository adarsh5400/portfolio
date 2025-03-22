#include<stdio.h>
int main ()
{
	//swap two number without using third variable and without using addition and substraction
	int a,b;
	printf("enter two integers");
	scanf("%d%d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("the number after swapping are%d%d",a,b);
	return 0;
}	
