#include<stdio.h>
int main()
{
	//input the three sides of a triangle annd calculate the area and perimeter
	float a,b,c,p,s,ar;
	printf("enter first side of triangle=\n");
	scanf("%f",&a);
	printf("enter second side of tiangle=\n");
	scanf("%f",&b);
	printf("enter third side of triangle==\n");
	scanf("%f",&c);
	p=a+b+c;
	printf("perimeter=%f",p);
	s=p/2;
	ar=s*((s-a)*(s-b)*(s-c));
	printf("area%f",ar);
	return 0;
}	
