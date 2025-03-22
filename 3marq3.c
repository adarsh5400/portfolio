#include<stdio.h>
int main ()
{
	//input radius of circle and calculate its area & circumference
	float r,a,c;
	printf("enter radius  of circle\n");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("area=%f\n",a);
	c=2*3.14*r;
	printf("circumference=%f\n",c);
	return 0;
}	
