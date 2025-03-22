#include<stdio.h>
int main ()
{
	//input the length and breadth of a rectangle and calculate area and perimeter
	float l,b,a,p;
	printf("enter lenght of rectanle=\n");
	scanf("%f",&l);
	printf("enter breath of rectangle=\n");
	scanf("%f",&b);
	a=l*b;
	printf("area=%f\n",a);
	p=2*(l+b);
	printf("perimeter=%f\n",p);
	return 0;
}	
	
