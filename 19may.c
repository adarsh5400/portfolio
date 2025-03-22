#include<stdio.h>
int main ()
{
	int num;
	int *p,**q;
	printf("enter the number:");
	scanf("%d",&num);
	p=&num;
	*q=p;
	printf("%d%d%d",num,*p,**q);
	return 0;
}	
