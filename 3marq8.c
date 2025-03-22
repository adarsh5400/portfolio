#include<stdio.h>
#include<math.h>
int main ()
{
	//find the roots of quadratic equation
	double a,b,c,d,s1,s2,r1,r2;
	printf("enter the coefficients of quadratic equation:");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=(b*b-4*a*c,0.5);
	printf("the determinant is%lf\n",d);
	s1=-b+d;
	s2=-b-d;
	r1=-b+(s1/(2*a));
	r2=-b-(s2/(2*a));
	printf("the roots are:%lfand%lf\n",r1,r2);
	return 0;
}	
